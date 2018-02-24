#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    char s[110];
    gets(s);
    int len = strlen(s);
    int sum = 0;
    for(int i = 0; i < len; ++i)
    {
        sum += (s[i] - '0');
    }
    int b = sum / 100;
    if(b > 0)
        printf("%s ", ch[b]);
    int s1 = sum / 10 % 10;
    if(b || s1)
        printf("%s ", ch[s1]);
    int g = sum % 10;
    printf("%s", ch[g]);
    return 0;
}
