#include<stdio.h>
#include<string.h>
int main()
{
    char str[1010];
    gets(str);
    int hashTable[200] = {0};
    int len = strlen(str);
    for(int i = 0; i < len; ++i)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            hashTable[str[i] + 32]++;
        }
        else
        {
            hashTable[str[i]]++;
        }
    }
    int m = 0;
    int k;
    for(int i = 97; i <= 122; ++i)
    {
        if(hashTable[i] > m)
        {
            m = hashTable[i];
            k = i;
        }
    }
    printf("%c %d\n", k, m);
    return 0;
}
