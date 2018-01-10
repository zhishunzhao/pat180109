#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d", &T);
    int a[100010];
    memset(a, 0, sizeof(a));
    while(T--)
    {
        int id, score;
        scanf("%d %d", &id, &score);
        a[id] += score;
    }
    int k = 0;
    int max = a[0];
    for(int i = 1; i < 100010; ++i)
    {
        if(a[i] > max)
        {
            max = a[i];
            k = i;
        }
    }
    printf("%d %d", k, max);
    return 0;
}
