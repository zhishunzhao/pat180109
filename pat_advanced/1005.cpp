#include<stdio.h>
#include<string.h>
int main()
{
    char s[110];
    gets(s);
    int len = strlen(s);
    int sum = 0;
    char num[10][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i = 0; i <len; ++i)
    {
        sum += (s[i] - '0');
    }
    if(sum / 100)
    {
        printf("%s ", num[sum / 100]);
    }
    if(sum / 10 % 10 || sum / 100)
    {
        printf("%s ", num[sum / 10 % 10]);
    }
    printf("%s", num[sum % 10]);
    return 0;
}
