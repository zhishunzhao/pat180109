#include<stdio.h>
#include<string.h>
int main()
{
    char s1[70], s2[70], s3[70], s4[70];
    scanf("%s%s%s%s", s1, s2, s3, s4);
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    int i = 0;
    char date[10][5] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    while(i < l1 && i < l2)
    {
        if(s1[i] >= 'A' && s1[i] <= 'Z' && s2[i] >= 'A' && s2[i] <= 'Z' && s1[i] == s2[i])
        {
            puts(date[s1[i] - 'A']);
            break;
        }
        i++;
    }
    i++;
    while(i < l1 && i < l2)
    {
        if((s1[i] >= 'A' && s1[i] <= 'N') || (s1[i] >= '0' && s1[i] <='9'))
        {
            if((s2[i] >= 'A' && s2[i] <= 'N') || (s2[i] >= '0' && s2[i] <='9'))
            {
                if(s1[i] == s2[i])
                {

                }
            }
        }
    }

}
