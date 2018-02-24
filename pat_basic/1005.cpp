#include<stdio.h>
#include<algorithm>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    int n;
    scanf("%d", &n);
    bool hashTable[1010] = {false};
    int a[110];
    int t;
    for(int i = 0; i < n; ++i)
    {

        scanf("%d", &t);
        a[i] = t;
        while(t != 1)
        {
            if(t % 2 == 0)
            {
                t /= 2;
                hashTable[t] = true;
            }
            else
            {
                t = (3 * t + 1) / 2;
                hashTable[t] = true;
            }
        }
    }
    sort(a, a + n, cmp);
    int cot = 0;
    for(int i = 0; i < n; ++i)
    {
        if(hashTable[a[i]] == false)
        {
            cot++;
        }
    }
    int cot2 = 0;
    for(int i = 0; i < n; ++i)
    {
        if(hashTable[a[i]] == false)
        {
            cot2++;
            printf("%d", a[i]);
            if(cot2 != cot)
            {
                printf(" ");
            }
        }
    }
    return 0;
}
