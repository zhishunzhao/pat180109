//1000位，必须处理成字符串
#include<stdio.h>
#include<string.h>
int main()
{

    char str[1010];
    gets(str);
    int n = strlen(str);
    int a[10] = {0};
    for(int i = 0; i < n; ++i)
    {
        a[str[i] - '0']++;
    }
    for(int i = 0; i < 10; ++i)
    {
        if(a[i] > 0)
            printf("%d:%d\n", i, a[i]);
    }
}
