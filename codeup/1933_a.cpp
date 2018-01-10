#include<stdio.h>
int main()
{
    int up;
    scanf("%d", &up);
    int low = up + (up - 1) * 2;
    int T = up;
    while(T--)
    {
        for(int i = 1; i <= low - up; ++i)
        {
            printf(" ");
        }
        for(int i = 1; i<= up; ++i)
        {
            printf("*");
        }
        printf("\n");
        up += 2;
    }
}
