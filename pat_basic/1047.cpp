#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int t1, t2, t3;
    int hashTable[1010] = {0};
    for(int i = 0; i < n; ++i)
    {
        scanf("%d-%d %d", &t1, &t2, &t3);
        hashTable[t1] += t3;
    }
    int m = 0;
    int k = -1;
    for(int i = 0; i < 1001; ++i)
    {
        if(hashTable[i] > m)
        {
            m = hashTable[i];
            k = i;
        }
    }
    printf("%d %d", k, m);
    return 0;
}
