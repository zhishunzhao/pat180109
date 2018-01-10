#include<stdio.h>
int main()
{
    int col;
    char ch;
    scanf("%d %c", &col, &ch);
    for(int i = 0; i < col; ++i)
        printf("%c", ch);
    printf("\n");
    int row;
    if(col % 2 == 0)
        row = col / 2;
    else
        row = col / 2 + 1;
    for(int j = 1; j <= row - 2; ++j)
    {
        printf("%c", ch);
        for(int k = 1; k <= col - 2; ++k)
            printf(" ");
        printf("%c\n", ch);
    }
    for(int i = 0; i < col; ++i)
        printf("%c", ch);



}
