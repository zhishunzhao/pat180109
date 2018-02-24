#include<stdio.h>
#include<string.h>
void reverse(char str[]);
int main()
{
    char s1[110], s2[110];
    scanf("%s %s", s1, s2);
    char dig[15] = "0123456789JQK";
    char ans[110];
    int num = 0;
    reverse(s1);
    reverse(s2);
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    int len = l1 > l2 ? l2 : l1;
    for(int i = 0; i < len; ++i)
    {
        if(i % 2 == 0)
        {
            ans[num++] = dig[((s1[i] - '0') + (s2[i] - '0')) % 13];
        }
        else
        {
            int temp = s2[i] - s1[i];
            if(temp < 0)
            {
                temp += 10;
            }
            ans[num++] = temp + '0';
        }
    }
    if(l2 > l1)
    {
        for(int i = len; i < l2; ++i)
        {
            ans[num++] = s2[i];
        }
    }
    for(int i = num - 1; i >= 0; --i)
    {
        printf("%c", ans[i]);
    }
    return 0;

}
void reverse(char str[])
{
    int i = 0;
    int j = strlen(str) - 1;
    while(i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
