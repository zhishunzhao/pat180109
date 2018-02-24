#include<stdio.h>
#include<string.h>
int main()
{
    char str1[110][20];
    char str2[20];
    int N;
    scanf("%d", &N);
    getchar();
    int count = 0;
    int w[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char str3[15] = "10X98765432";
    while(N--)
    {
        int sum = 0;
        bool flag = true;
        gets(str2);
        for(int i = 0; i < 17; ++i)
        {
            if(str2[i] >= '0' && str2[i] <='9')
            {
                sum += ((str2[i] - '0') * w[i]);
            }
            else
            {
                flag = false;
                break;
            }

        }
        if(flag == true)
        {
            int z = sum % 11;
            if(str3[z] == str2[17])
            {
                flag = true;
            }
            else
            {
                flag = false;
            }

        }
        if(flag == false)
        {
            strcpy(str1[count++], str2);
        }



    }
    if(count > 0)
    {

        for(int i = 0; i < count; ++i)
        {
            puts(str1[i]);
        }
    }
    else
    {
        printf("All passed");
    }

}
