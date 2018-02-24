#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct Student
{
    int id;

    int sum;
    int perfect;
    int r;
}stu[10010];
int test[10010][10];
bool cmp(Student a, Student b)
{
    if(a.sum != b.sum)
        return a.sum > b.sum;
    else
    {
        if(a.perfect != b.perfect)
            return a.perfect > b.perfect;
        else
            return a.id < b.id;
    }
}
int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &k, &m);
    int p[10];
    for(int i = 1; i <= k; ++i)
    {
        scanf("%d", &p[i]);
    }
    memset(test, -1, sizeof(test));
    int t1, t2, t3;
    for(int i = 0; i < m; ++i)
    {
        scanf("%d %d %d",&t1, &t2, &t3);
        if(t3 != -1)
        {
            if(t3 > test[t1][t2])
            {
                test[t1][t2] = t3;
            }
        }
        else
        {
            for(int x = 1; x <= k; ++x)
            {
                if(test[t1][x] != -1)
                {
                    test[t1][t2] = 0;
                }
            }
        }
    }
    int validnum = 0;
    for(int i = 1; i <= n; ++i)
    {
        bool flag = false;
        for(int j = 1; j <= k; ++j)
        {
            if(test[i][j] > -1)
            {
                flag = true;
            }
        }
        if(flag)
        {
            stu[validnum].sum = 0;
            stu[validnum].perfect = 0;
            stu[validnum].id = i;
            for(int j = 1; j <= k; ++j)
            {
                if(test[i][j] > -1)
                {
                    stu[validnum].sum += test[i][j];

                }
                if(test[i][j] == p[j])
                {
                    stu[validnum].perfect++;
                }
            }
            validnum++;
        }



    }
    sort(stu, stu + validnum, cmp);
    stu[0].r = 1;
    for(int i = 1; i < validnum; ++i)
    {
        if(stu[i].sum == stu[i - 1].sum)
            stu[i].r = stu[i - 1].r;
        else
            stu[i].r = i + 1;

    }
    for(int i = 0; i < validnum; ++i)
    {
        printf("%d %06d %d", stu[i].r, stu[i].id, stu[i].sum);
        for(int j = 1; j <= k; ++j)
        {
            if(test[stu[i].id][j] > -1)
            {
                printf(" %d", test[stu[i].id][j]);
            }
            else
            {
                printf(" -");
            }
        }
        printf("\n");
    }



}
