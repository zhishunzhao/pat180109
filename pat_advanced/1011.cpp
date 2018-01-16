#include<stdio.h>
int main()
{
    double a[3][3];
    double product = 1.0;
    char ch[3] = {'W', 'T', 'L'};
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            scanf("%lf", &a[i][j]);
        }
    }
    for(int i = 0; i < 3; ++i)
    {
        double temp = a[i][0];
        int k = 0;
        for(int j = 1; j < 3; ++j)
        {
           if(a[i][j] > temp)
           {
               temp = a[i][j];
               k = j;
           }
        }
        printf("%c ", ch[k]);
        product *= a[i][k];
    }
    product = (product * 0.65 - 1) * 2;
    printf("%.2f\n", product);
    return 0;
}
