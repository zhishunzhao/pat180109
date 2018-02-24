#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    gets(str1);
    gets(str2);
    bool hashTable[200] = {false};
    int len1 = strlen(str1);
    for(int i = 0; i < len1; ++i)
    {
        if(str1[i] >= 'a' && str1[i] <= 'z')
        {
            hashTable[str1[i] - 32] = true;
        }
        else
        {
            hashTable[str1[i]] = true;
        }
    }
    int len2 = strlen(str2);
    for(int i = 0; i < len2; ++i)
    {
       if(str2[i] >= 'a' && str2[i] <= 'z')
        {
            hashTable[str2[i] - 32] = false;
        }
        else
        {
            hashTable[str2[i]] = false;
        }
    }
    for(int i = 0; i < len1; ++i)
    {
        if(str1[i] >= 'a' && str1[i] <= 'z')
        {
            if(hashTable[str1[i] - 32] == true)
            {
                printf("%c", str1[i] - 32);
                hashTable[str1[i] - 32] = false;
            }
        }
        else
        {
            if(hashTable[str1[i]] == true)
            {
                printf("%c", str1[i]);
                hashTable[str1[i]] = false;
            }
        }
    }
    return 0;
}
