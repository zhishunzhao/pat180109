#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

struct Student
{
    char id[15];
    int score;
    int final_rank;
    int local_rank;
    int location_number;
}stu[30010];
bool cmp(Student a, Student b)
{
    if(a.score != b.score)
        return a.score > b.score;
    else
        return strcmp(a.id, b.id) < 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int count = 1;
    while(n--)
    {
        int m;
        scanf("%d", &m);

        for(int i = 0; i < m; ++i)
        {
            scanf("%s %d", stu[sum + i].id, &stu[sum + i].score);
            stu[sum + i].location_number = count;
        }
        //
        count++;
        sort(stu + sum, stu + sum + m, cmp);
        stu[sum].local_rank = 1;
        for(int i = 1; i < m; ++i)
        {
            if(stu[i + sum].score == stu[i + sum - 1].score)
            {
                stu[i + sum].local_rank = stu[i + sum - 1].local_rank;
            }
            else
            {
                stu[i + sum].local_rank = i + 1;
            }
        }
        sum += m;
    }
    sort(stu, stu + sum, cmp);
    stu[0].final_rank = 1;
    for(int i = 1; i < sum; ++i)
    {
        if(stu[i].score == stu[i - 1].score)
        {
            stu[i].final_rank = stu[i - 1].final_rank;
        }
        else
        {
            stu[i].final_rank = i + 1;
        }
    }
    printf("%d\n", sum);
    for(int i = 0; i < sum; ++i)
    {
        printf("%s %d %d %d\n", stu[i].id, stu[i].final_rank, stu[i].location_number, stu[i].local_rank);
    }
    return 0;
}
