#include<stdio.h>
struct Stu
{
    char id[20];
    int n1;
    int n2;
};
int main()
{
    Stu stu[1010];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        scanf("%s %d %d", stu[i].id, &stu[i].n1, &stu[i].n2);
    }
    int m;
    scanf("%d", &m);
    while(m--)
    {
        int t;
        scanf("%d", &t);
        for(int i = 0; i < n; ++i)
        {
            if(t == stu[i].n1)
            {
                printf("%s %d\n", stu[i].id, stu[i].n2);
            }
        }
    }
    return 0;
}
