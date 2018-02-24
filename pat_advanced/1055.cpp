#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct Person
{
    char name[10];
    int age;
    int worth;
}pe[100010], valid[100010];

bool cmp(Person a, Person b)
{
    if(a.worth != b.worth)
        return a.worth > b.worth;
    else
    {
        if(a.age != b.age)
            return a.age < b.age;
        else
            return strcmp(a.name, b.name) < 0;
    }
}

int Age[100010] = {0};
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; ++i)
    {
        scanf("%s %d %d", pe[i].name, &pe[i].age, &pe[i].worth);
    }
    sort(pe, pe + n, cmp);
    int validNum = 0;
    for(int i = 0; i < n; ++i)
    {
        if(Age[pe[i].age] < 100)
        {
            Age[pe[i].age]++;
            valid[validNum++] = pe[i];
        }
    }
    int m, age_l, age_r;
    for(int i = 0; i < k; ++i)
    {
        scanf("%d %d %d", &m, &age_l, &age_r);
        printf("Case #%d:\n", i + 1);
        int printNum = 0;
        for(int j = 0; j < validNum && printNum < m; ++j)
        {
            if(valid[j].age >= age_l && valid[i].age <= age_r)
            {
                printf("%s %d %d\n", valid[j].name, valid[j].age, valid[j].worth);
                printNum++;
            }
        }
        if(printNum == 0)
            printf("None\n");
    }
    return 0;
}
