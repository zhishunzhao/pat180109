#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[100010];
    int left = 0;
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        if(a[i] != i && i)
        {
            left++;
        }
    }
    int j;
    int cnt = 0;
    while(left)
    {
        if(a[0])
        {
            for(int i = 1; i < n; ++i)
            {
                if(a[i] != i)
                {
                    j = i;
                    break;
                }
            }
            a[0] = a[j];
            a[j] = 0;
            cnt++;
        }
        else
        {
            for(int i = 1; i < n; ++i)
            {
                if(!a[i])
                {
                    j = i;
                    break;
                }
            }
            for(int i = 0; i < n; ++i)
            {
                if(a[i] == j)
                {
                    a[j] = j;
                    a[i] = 0;
                    cnt++;
                    left--;
                }
            }
        }
    }
    printf("%d", cnt);
    return 0;

}
