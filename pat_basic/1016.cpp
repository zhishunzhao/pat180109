#include<stdio.h>
int main()
{
    char DA, DB, strA[20], strB[20];
    scanf("%s %c %s %c", strA, &DA, strB, &DB);
    int sum1 = 0, sum2 = 0;
    int i = 0;
    while(strA[i] != '\0')
    {
        if(strA[i] == DA)
            sum1 = sum1 * 10 + (DA - '0');
        i++;
    }
    int j = 0;
    while(strB[j] != '\0')
    {
        if(strB[j] == DB)
            sum2 = sum2 * 10 + (DB - '0');
        j++;
    }
    printf("%d\n", sum1 + sum2);
    return 0;
}
