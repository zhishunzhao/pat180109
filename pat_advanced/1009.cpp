#include<stdio.h>
int main()
{
    double a[1010] = {0};
    double b[2010] = {0};
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
        for(int j = 0;j < 1010; ++j)
        {
            if(a[j] != 0)
            {
                b[j + t1] += (t2 * a[j]);
            }
        }
    }
    for(int i = 0; i < 2010; ++i)
    {
        if(b[i] != 0)
            count++;
    }
    printf("%d", count);
    for(int i = 2009; i >= 0; --i)
    {
        if(b[i] != 0)
        {
            printf(" %d %.1f", i, b[i]);
        }
    }
}
