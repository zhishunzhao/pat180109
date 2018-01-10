#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int c1 = 0, c2 = 0;
    while(t--)
    {
        int a1, a2, b1, b2;
        scanf("%d%d%d%d", &a1, &a2, &b1, &b2);
        if((a2 == a1 + b1) && (b2 != a1 + b1))
            c2 += 1;
        else if((b2 == a1 + b1) && (a2 != a1 + b1))
            c1 += 1;
        else
            continue;
    }
    printf("%d %d\n",c1, c2);
}
