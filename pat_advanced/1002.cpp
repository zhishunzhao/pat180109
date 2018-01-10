#include<stdio.h>
int main()
{
    double a[1010] = {0}, b[1010] = {0};
    int n1, n2;
    int t1;
    int count = 0;
    double t2;
    scanf("%d", &n1);
    for(int i = 0; i < n1; ++i)
    {
        scanf("%d %lf", &t1, &t2);
        a[t1] = t2;
    }
    scanf("%d", &n2);
    for(int i = 0; i < n2; ++i)
    {
        scanf("%d %lf", &t1, &t2);
        b[t1] = t2;
    }
    for(int i = 0; i < 1010; ++i)
    {
        a[i] += b[i];
        if(a[i] != 0)
            count++;

    }
    printf("%d", count);
    for(int i = 1009; i >= 0; --i)
    {
        if(a[i] != 0)
        {
            printf(" %d %.1f", i, a[i]);
        }
    }
    return 0;
}
