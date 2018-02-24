#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int hashTable[10010] = {0};
    int a[100010];
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        hashTable[a[i]]++;
    }
    for(int i = 0; i < n; ++i)
    {
        if(hashTable[a[i]] == 1)
        {
            printf("%d", a[i]);
            return 0;
        }

    }
    printf("None");
    return 0;
}
