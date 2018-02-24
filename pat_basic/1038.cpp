#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int hashTable[110] = {0};
    for(int i = 0; i < n; ++i)
    {
       int temp;
       scanf("%d", &temp);
       hashTable[temp]++;
    }
    int m;
    scanf("%d", &m);
    for(int i = 0; i < m; ++i)
    {
        int temp_2;
        scanf("%d", &temp_2);
        printf("%d", hashTable[temp_2]);
        if(i != m - 1)
            printf(" ");
    }
    return 0;
}
