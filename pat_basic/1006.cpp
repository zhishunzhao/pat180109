#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int b, s, g;
    b = n / 100;
    if(b > 0)
    {
        for(int i = 0; i < b; ++i)
        {
            printf("B");
        }
    }
    s = n / 10 % 10;
    if(s > 0)
    {
        for(int i = 0; i < s; ++i)
        {
            printf("S");
        }
    }
    g = n % 10;
    if(g > 0)
    {
        for(int i = 1; i <= g; ++i)
            printf("%d", i);
    }

    return 0;
}
