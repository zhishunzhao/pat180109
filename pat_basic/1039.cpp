#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1010], str2[1010];
    gets(str1);
    gets(str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int hashTable[200] = {0};
    for(int i = 0; i < len1; ++i)
    {
        hashTable[str1[i]]++;
    }
    int count = 0;
    for(int i = 0; i < len2; ++i)
    {
        if(hashTable[str2[i]] > 0)
        {
            hashTable[str2[i]]--;
        }
        else
        {
            count++;

        }
    }
    if(count == 0)
    {
        printf("Yes ");
        int sum = 0;
        for(int i = 0; i < 200; ++i)
        {
            if(hashTable[i] > 0)
            {
                sum += hashTable[i];
            }
        }
        printf("%d", sum);
    }
    else
    {
        printf("No ");
        printf("%d", count);
    }
}
