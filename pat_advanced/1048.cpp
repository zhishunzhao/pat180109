#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    int a[100010];
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    int i = 0;
    int j = n - 1;
    while(i < j)
    {
        if(a[i] + a[j] < m)
        {
            i++;
        }
        else
        {
            if(a[i] + a[j] > m)
            {
                j--;
            }
            else
            {
                printf("%d %d", a[i], a[j]);
                return 0;
            }
        }
    }
    printf("No Solution");
    return 0;

}
