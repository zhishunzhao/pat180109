#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int count = 1;
    while(t--)
    {
        long long a, b, c;
        bool flag;
        scanf("%lld%lld%lld", &a, &b, &c);
        long long ans = a + b;
        if(a > 0 && b > 0 && ans < 0)
        {
           flag = true;
        }
        else
        {
            if(a < 0 && b < 0 && ans >= 0)
            {
                flag = false;
            }
            else
            {
                if(ans > c)
                {
                    flag = true;
                }
                else
                {
                    flag = false;
                }
            }

        }
        if(flag == true)
        {
            printf("Case #%d: true\n", count++);
        }
        else
        {
            printf("Case #%d: false\n", count++);
        }
    }
    return 0;
}
