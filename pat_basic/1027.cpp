#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    char ch;
    scanf("%d %c", &n, &ch);
    int ceng = int(sqrt((n + 1) / 2.0));
    int high = 1 + (ceng - 1) * 2;
    int k = high;
    int sum = 2 * ceng * ceng - 1;
    int dif = n - sum;
    int blank;
    while(k > 1)
    {
        blank = (high - k) / 2;
        for(int i = 0; i < blank; ++i)
        {
            printf(" ");
        }
        for(int i = 1; i <= k; ++i)
            printf("%c", ch);

        printf("\n");
        k -= 2;
    }
    while(k <= high)
    {
        blank = (high - k) / 2;
        for(int i = 0; i < blank; ++i)
        {
            printf(" ");
        }
        for(int i = 1; i <= k; ++i)
        {
            printf("%c", ch);
        }

        printf("\n");
        k += 2;
    }
    printf("%d", dif);
}
