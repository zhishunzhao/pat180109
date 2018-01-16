#include<stdio.h>
int main()
{
    int n,b;
    scanf("%d %d", &n, &b);
    int a[50];
    int top = -1;
    if(n == 0)
    {
        a[++top] = 0;
    }
    else
    {
        while(n)
        {
            a[++top] = n % b;
            n /= b;
        }
    }
    int i = 0;
    int j = top;
    while(i < j)
    {
        if(a[i] != a[j])
        {
            break;
        }
        ++i;
        --j;
    }
    if(i >= j)
    {
        printf("Yes\n");
        while(top != -1)
        {
            printf("%d", a[top--]);
            if(top != -1)
                printf(" ");
        }
    }
    else
    {
        printf("No\n");
        while(top != -1)
        {
            printf("%d", a[top--]);
            if(top != -1)
                printf(" ");
        }
    }
    return 0;
}
