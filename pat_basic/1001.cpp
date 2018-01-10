#include<stdio.h>
int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);
    while(n != 1)
    {
        if(n % 2 == 1)
            n = (3 * n + 1) / 2;
        else
            n = n / 2;
        count += 1;
    }
    printf("%d", count);
    return 0;
}
