#include<cstdio>
#include<algorithm>
using namespace std;
void int_to_num(int n, int num[]);
int num_to_int(int num[]);

bool cmp(int a, int b)
{
    return a > b;
}


int main()
{
    int num[5];
    int n, MIN, MAX;
    scanf("%d", &n);
    while(1)
    {
        int_to_num(n, num);
        sort(num, num + 4);
        MIN = num_to_int(num);
        sort(num, num + 4, cmp);
        MAX = num_to_int(num);
        n = MAX - MIN;
        printf("%04d - %04d = %04d\n", MAX, MIN, n);
        if(n == 6174 || n == 0)
            break;
    }
    return 0;
}

void int_to_num(int n, int num[])
{

    if(!n)
    {
        num[0] = 0;
    }
    for(int i = 0; i < 4; ++i)
    {
        num[i] = n % 10;
        n /= 10;
    }
}

int num_to_int(int num[])
{
    int sum = 0;
    for(int i = 0; i < 4; ++i)
    {
        sum = sum * 10 + num[i];
    }
    return sum;
}
