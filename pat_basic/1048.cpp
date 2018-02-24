#include<stdio.h>
#include<string.h>
int main()
{
    char str1[110], str2[110], str3[110];
    char dig[15] = "0123456789JQK";
    scanf("%s %s", str1, str2);
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    int d = 1;
    int i = l1 - 1;
    int j = l2 - 1;
    int num = 0;
    while(i >= 0 && j >= 0)
    {
        if(d % 2 == 1)
        {
          str3[num++] = dig[((str1[i] - '0') + (str2[j] - '0')) % 13];
        }
        else
        {
            int temp = str2[j] - str1[i];
            if(temp < 0)
            {
                temp += 10;
            }
            str3[num++] = char(temp + '0');
        }
        i--;
        j--;
        d++;
    }
    if(j > 0)
    {
        while(j >= 0)
        {
            str3[num++] = str2[j];
            j--;
        }
    }
    for(int k = num - 1; k >= 0; ++k)
    {
        printf("%c", str3[k]);
    }
}
