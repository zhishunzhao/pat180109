#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    int side = (len + 2) / 3;
    int bottom = len - 2 * side;
    int i = 0;
    int j = len - 1;
    while(i < side - 1)
    {
        printf("%c", str[i]);
        for(int m = 0; m < bottom; ++m)
        {
            printf(" ");
        }
        printf("%c", str[j]);
        printf("\n");
        i++;
        --j;
    }
    while(i <= j)
    {
        printf("%c", str[i]);
        ++i;
    }
}
