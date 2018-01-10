#include<stdio.h>
#include<string.h>
int main()
{
    const int maxn = 100;
    char str[maxn];
    gets(str);
    int len = strlen(str);
    str[len] = ' ';
    int i = len - 1;
    while(i >= 0)
    {
        if(str[i] == ' ')
        {
            for(int j = i + 1; str[j] != ' '; ++j)
                printf("%c", str[j]);
            printf(" ");
        }
        if(i == 0)
        {
            for(int j = i; str[j] != ' '; ++j)
                printf("%c", str[j]);
        }
        i--;
    }
    return 0;
}
