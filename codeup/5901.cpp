#include<stdio.h>
#include<string.h>
const int maxn = 256;
bool judge(char str[])
{
    int len = strlen(str);
    int i = 0;
    int j = len - 1;
    while(i < j)
    {
        if(str[i] != str[j])
        {
            printf("NO\n");
            break;
        }
        i++;
        j--;
    }
    if(i >= j)
        printf("YES\n");
}
int main()
{
   char s[maxn];
   while(gets(s))
   {
       judge(s);

   }
   return 0;
}
