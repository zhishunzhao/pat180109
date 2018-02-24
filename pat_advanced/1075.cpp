#include<stdio.h>
#include<>
struct Student
{
    int id;
    //int score[10];
    int sum;
    int perfect;
    int r;
}stu[10010];
int test[10010][10];

bool cmp(Student a, Student b)
{
    if(a.r != b.r)
        return a.r < b.r;
    else
    {
        if(a.perfect != b.perfect)
            return a.perfect >b.perfect;
        else
            return a.id < b.id;
    }
}
int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &k, &m);
    int p[10];
    for(int i = 0; i < k; ++i)
    {
        scanf("%d", &p[i]);
    }
    memset(test, -1, sizeof(test));
    for(int i = 0; i < m; ++i)
    {
        scanf("%d %d %d",&t1, &t2, &t3);
        test[t1][t2] = t3;
    }


}
