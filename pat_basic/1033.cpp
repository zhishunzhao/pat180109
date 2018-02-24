#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100010], str2[100010];
    gets(str1);
    gets(str2);
    bool hashTable[300] = {false};
    int len1 = strlen(str1);
    for(int i = 0; i < len1; ++i)
    {
        if(str1[i] >= 'A' && str1[i] <= 'Z')
        {
            hashTable[str1[i] + 32] = true;
        }
        else
        {
            hashTable[str1[i]] = true;
        }
    }
    int len2 = strlen(str2);
    for(int i = 0; i < len2; ++i)
    {
        if(str2[i] >= 'A' && str2[i] <= 'Z')
        {
            if(hashTable[str2[i] + 32] == false && hashTable['+'] == false)
            {
                printf("%c", str2[i]);
            }
        }
        else
        {
            if(hashTable[str2[i]] == false)
            {
                printf("%c", str2[i]);
            }
        }
    }
    return 0;
}
