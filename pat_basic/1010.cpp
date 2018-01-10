#include<stdio.h>
int main()
{
    int a, b;
    bool flag = false;
    bool flag_2 = false;
    while(scanf("%d%d", &a, &b) != EOF)
    {
        if(b != 0)
        {
            if(flag_2 == false)
            {
                printf("%d %d", a * b, b - 1);

                flag = true;
                flag_2 = true;
            }
            else
            {
                printf(" %d %d", a * b, b - 1);
            }
        }
        else
        {
            if(flag == false)
            {
                printf("0 0");
            }

        }
    }
    return 0;
}
