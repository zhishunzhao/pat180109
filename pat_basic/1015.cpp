#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct Student
{
    char id[10];
    int score_d;
    int score_c;
    int sum;
}c1[100010], c2[100010], c3[100010], c4[100010];

bool cmp(Student a, Student b)
{
    if(a.sum != b.sum)
        return a.sum > b.sum;
    else
        if(a.score_d != b.score_d)
            return a.score_d > b.score_d;
        else
            return strcmp(a.id, b.id) < 0;
}
int main()
{
    int N, L, H;
    scanf("%d %d %d", &N, &L, &H);
    char temp_id[10];
    int temp_d, temp_c;
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n = 0;
    for(int i = 0; i < N; ++i)
    {
        scanf("%s %d %d", temp_id, &temp_d, &temp_c);
        if(temp_d >= L && temp_c >= L)
        {
            n++;
            if(temp_d >= H && temp_c >= H)
            {
                strcpy(c1[n1].id, temp_id);
                c1[n1].score_d = temp_d;
                c1[n1].score_c = temp_c;
                c1[n1++].sum = temp_d + temp_c;
            }
            else
            {
                if(temp_d >= H && temp_c < H)
                {
                    strcpy(c2[n2].id, temp_id);
                    c2[n2].score_d = temp_d;
                    c2[n2].score_c = temp_c;
                    c2[n2++].sum = temp_d + temp_c;
                }
                else
                {
                    if(temp_d < H && temp_c < H &&temp_d >= temp_c)
                    {
                        strcpy(c3[n3].id, temp_id);
                        c3[n3].score_d = temp_d;
                        c3[n3].score_c = temp_c;
                        c3[n3++].sum = temp_d + temp_c;
                    }
                    else
                    {
                        strcpy(c4[n4].id, temp_id);
                        c4[n4].score_d = temp_d;
                        c4[n4].score_c = temp_c;
                        c4[n4++].sum = temp_d + temp_c;

                    }
                }
            }
        }
    }
    sort(c1, c1 + n1, cmp);
    sort(c2, c2 + n2, cmp);
    sort(c3, c3 + n3, cmp);
    sort(c4, c4 + n4, cmp);
    printf("%d\n", n);
    for(int i = 0; i < n1; ++i)
    {
        printf("%s %d %d\n", c1[i].id, c1[i].score_d, c1[i].score_c);
    }
    for(int i = 0; i < n2; ++i)
    {
        printf("%s %d %d\n", c2[i].id, c2[i].score_d, c2[i].score_c);
    }
    for(int i = 0; i < n3; ++i)
    {
        printf("%s %d %d\n", c3[i].id, c3[i].score_d, c3[i].score_c);
    }
    for(int i = 0; i < n4; ++i)
    {
        printf("%s %d %d\n", c4[i].id, c4[i].score_d, c4[i].score_c);
    }
    return 0;
}
