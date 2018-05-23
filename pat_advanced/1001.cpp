#include<stdio.h>
//test test test
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    if(sum < 0)
    {
        printf("-");
        sum = -sum;
    }
    int s[10];
    int top = -1;
    if(sum == 0)
    {
        s[++top] = 0;
    }
    while(sum)
    {
        s[++top] = sum % 10;
        sum /= 10;
    }
    while(top != -1)
    {
        printf("%d", s[top]);
        if(top % 3 == 0 && top != 0)
            printf(",");
        top--;
    }
    return 0;

}
