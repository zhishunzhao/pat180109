#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10010], s2[10010];
    gets(s1);
    gets(s2);
    bool hashTable[300] = {false};
    int l2 = strlen(s2);
    for(int i = 0; i < l2; ++i)
    {
        hashTable[s2[i]] = true;
    }
    int l1 = strlen(s1);
    for(int i = 0; i < l1; ++i)
    {
        if(hashTable[s1[i]] == false)
        {
            printf("%c", s1[i]);
        }
    }
    return 0;
}
