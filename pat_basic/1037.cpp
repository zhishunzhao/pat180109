#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int a1, a2, a3;
    int b1, b2, b3;
    scanf("%d.%d.%d", &a1, &a2, &a3);
    scanf("%d.%d.%d", &b1, &b2, &b3);
    int c1 = a1 * 17 * 29 + a2 * 29 + a3;
    int c2 = b1 * 17 * 29 + b2 * 29 + b3;
    if(c1 > c2)
    {
        printf("-");
        swap(c1, c2);
    }
    int c3 = c2 - c1;
    printf("%d.%d.%d\n", c3 / (17 * 29), c3 / 29 % 17, c3 % 29);
    return 0;
}
