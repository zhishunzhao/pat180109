#include<stdio.h>
#include<string.h>
int main()
{
    char str[10010];
    gets(str);
    int len = strlen(str);
    int sum = 0;
    char dict[10] = "PATest";
    int hashTable[10] = {0};
    for(int i = 0; i < len; ++i)
    {
        for(int j = 0; j < 6; ++j)
        {
            if(str[i] == dict[j])
            {
                hashTable[j]++;
                sum++;
            }
        }
    }
    while(sum)
    {
        for(int i = 0; i < 6; ++i)
        {
            if(hashTable[i] > 0)
            {
                printf("%c", dict[i]);
                hashTable[i]--;
                sum--;
            }
        }
    }
    return 0;
}
