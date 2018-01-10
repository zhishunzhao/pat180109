#include<stdio.h>
int main()
{
    int a1[3] = {0}, b1[3] = {0};//胜负平数组
    int a2[3] = {0}, b2[3] = {0};//'b' = 0, 'c' = 1, 'j' = 2
    int t;
    scanf("%d", &t);
    while(t--)
    {
        getchar();
        char a, b;
        scanf("%c %c", &a, &b);
        if(a == 'C')
        {
            if(b == 'J')
            {
                a1[0]++;
                b1[2]++;
                a2[1]++;
            }
            else
            {
                if(b == 'C')
                {
                    a1[2]++;
                    b1[2]++;

                }
                else
                {
                    a1[2]++;
                    b1[0]++;
                    b2[0]++;
                }

            }
        }
        else
        {
            if(a == 'J')
            {
                if(b == 'J')
                {
                    a1[1]++;
                    b1[1]++;

                }
                else
                {
                    if(b == 'C')
                    {
                       b1[0]++;
                       a1[2]++;
                       b2[1]++;
                    }
                    else
                    {
                        a1[0]++;
                        b1[2]++;
                        a2[2]++;
                    }
                }
            }
            else
            {
                if(b == 'J')
                {
                    a1[2]++;
                    b1[0]++;
                    b2[2]++;
                }
                else
                {
                    if(b == 'C')
                    {
                        a1[0]++;
                        b1[2]++;
                        a2[0]++;
                    }
                    else
                    {
                        a1[1]++;
                        b1[1]++;

                    }
                }
            }
        }

    }
    for(int i = 0; i < 3; ++i)
    {
        printf("%d", a1[i]);
        if(i != 2)
            printf(" ");
    }
    printf("\n");
    for(int i = 0; i < 3; ++i)
    {
        printf("%d", a2[i]);
        if(i != 2)
            printf(" ");
    }
    printf("\n");
    int k = 0;
    int ans = a2[0];
    for(int i = 1; i < 3; ++i)
    {
        if(a2[i] > ans)
        {
            ans = a2[i];
            k = i;
        }
    }
    if(k == 0)
        printf("B ");
    else
        if(k == 1)
            printf("C ");
        else
            printf("J ");
    k = 0;
    ans = b2[0];
    for(int i = 1; i < 3; ++i)
    {
        if(b2[i] > ans)
        {
            ans = b2[i];
            k = i;
        }
    }
    if(k == 0)
        printf("B");
    else
        if(k == 1)
            printf("C");
        else
            printf("J");
    return 0;



}
