#include<stdio.h>
#include<string.h>
int main()
{
    char str[10010];
    gets(str);
    int len = strlen(str);
    if(str[0] == '-')
        printf("-");
    int pos = 0;
    for(int i = 0; i < len; ++i)
    {
        if(str[i] == 'E')
        {
            pos = i;
            break;
        }
    }
    if(str[pos + 1] == '+')
    {
        int e = 0;
        for(int i = pos + 2; i < len; ++i)
        {
            e = e * 10 + (str[i] - '0');
        }
        int w = pos - 3;
        {
            if(e > w)
            {
                for(int i = 1; i < pos; ++i)
                {
                    if(str[i] != '.')
                    {
                        printf("%c", str[i]);
                    }
                }
                for(int i = 0; i < e - w; ++i)
                {
                    printf("0");
                }
            }
            else
            {
                if(e < w)
                {
                    printf("%c", str[1]);
                    for(int i = 3; i < 3 + e; ++i)
                    {
                        printf("%c", str[i]);
                    }
                    printf(".");
                    for(int i = 3 + e; i < pos; ++i)
                    {
                        printf("%c", str[i]);
                    }
                }
                else
                {
                    for(int i = 1; i < pos; ++i)
                    {
                        if(str[i] != '.')
                        {
                            printf("%c", str[i]);
                        }
                    }
                }
            }
        }

    }
    else
    {
        int e = 0;
        for(int i = pos + 2; i < len; ++i)
        {
            e = e * 10 + (str[i] - '0');
        }
        printf("0.");
        for(int i = 0; i < e - 1; ++i)
        {
            printf("0");
        }
        for(int i = 1; i < pos; ++i)
        {
            if(str[i] != '.')
            {
                printf("%c", str[i]);
            }
        }
    }
    return 0;
}
