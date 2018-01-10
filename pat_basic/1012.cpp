#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[1010];
    int a1 = 0, a2 = 0;
    int c = 1;
    int c2 = 0;
    int c3 = 0;
    double aver;
    int sum = 0;
    int max = 0;
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        if((a[i] % 5 == 0) && (a[i] % 2 == 0))
            a1 += a[i];
        if(a[i] % 5 == 1)
        {
           if(c % 2 == 0)
                a2 += -a[i];
            else
                a2 += a[i];
            c++;
        }
        if(a[i] % 5 == 2)
            c2++;
        if(a[i] % 5 == 3)
        {
            sum += a[i];
            c3++;
        }
        if(a[i] % 5 == 4)
        {
            if(a[i] > max)
            {
                max = a[i];
            }
        }

    }
    aver = sum / double(c3);
    if(a1 == 0)
        printf("N ");
    else
        printf("%d ", a1);
    if(c == 1)
        printf("N ");
    else
        printf("%d ", a2);

    if( c2 == 0)
        printf("N ");
    else
        printf("%d ", c2);
    if(c3 == 0)
        printf("N ");
    else
        printf("%.1f ", aver);
    if(max == 0)
        printf("N");
    else
        printf("%d", max);
    return 0;

}
