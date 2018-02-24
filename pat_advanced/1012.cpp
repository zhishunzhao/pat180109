#include<stdio.h>
#include<algorithm>

using namespace std;

struct Student
{
    int id;
    int score[4];
}stu[2010];

int Rank[1000010][4] = {0};

int now;

bool cmp(Student a, Student b)
{
    return a.score[now] > b.score[now];
}
char courses[5] = "ACME";
int main()
{
   int N, M;
   scanf("%d %d", &N, &M);
   for(int i = 0; i < N; ++i)
   {
       scanf("%d %d %d %d", &stu[i].id, &stu[i].score[1], &stu[i].score[2], &stu[i].score[3]);
       stu[i].score[0] = stu[i].score[1] + stu[i].score[2] + stu[i].score[3];
   }
   for(now = 0; now < 4; ++now)
   {
       sort(stu, stu + N, cmp);
       Rank[stu[0].id][now] = 1;
       for(int i = 1; i < N; ++i)
       {
           if(stu[i].score[now] == stu[i - 1].score[now])
           {
               Rank[stu[i].id][now] = Rank[stu[i - 1].id][now];

           }
           else
           {
               Rank[stu[i].id][now] = i + 1;
           }
       }
   }
   int num;
   for(int i = 0; i < M; ++i)
   {
       scanf("%d", &num);
       int min = Rank[num][0];
       int min_j = 0;
       for(int j = 1; j < 4; ++j)
       {
           if(Rank[num][j] < min)
           {
               min = Rank[num][j];
               min_j = j;
           }
       }
       if(min)
       {
           printf("%d %c\n", min, courses[min_j]);
       }
       else
       {
           printf("N/A\n");
       }
   }
   return 0;

}
