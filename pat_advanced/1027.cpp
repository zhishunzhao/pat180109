#include<stdio.h>
int main()
{
    char ch[15] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C'};
    printf("#");
    for(int i = 0; i < 3; ++i)
    {
       int t;
       scanf("%d", &t);
       int a1 = t % 13;
       int a2 = t / 13;
       printf("%c%c", ch[a2], ch[a1]);
    }
    return 0;
}
