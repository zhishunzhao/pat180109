#include<stdio.h>
struct Stu
{
    char name[15];
    char id[15];
    int score;
};
int main()
{
    int n;
    scanf("%d", &n);
    Stu stu[110];
    for(int i = 0; i < n; ++i)
    {
        scanf("%s %s %d", stu[i].name, stu[i].id, &stu[i].score);

    }
    int j = 0;
    int t = stu[0].score;
    for(int i = 1; i < n; ++i)
    {
        if(stu[i].score > t)
        {
            j = i;
            t = stu[i].score;
        }
    }
    printf("%s %s\n", stu[j].name, stu[j].id);
    j = 0;
    t = stu[0].score;
    for(int i = 1; i < n; ++i)
    {
        if(stu[i].score < t)
        {
            j = i;
            t= stu[i].score;
        }
    }
    printf("%s %s\n", stu[j].name, stu[j].id);
    return 0;


}
