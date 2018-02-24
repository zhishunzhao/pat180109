#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

char name[40010][5];
vector<int> courses[2510];

bool cmp(int a, int b)
{
    return strcmp(name[a], name[b]) < 0;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int c, courseID;
    for(int i = 0; i < n; ++i)
    {
        scanf("%s %d", name[i], &c);
        for(int j = 0; j < c; ++j)
        {
            scanf("%d", &courseID);
            courses[courseID].push_back(i);
        }
    }
    for(int i = 1; i <= k; ++i)
    {
        printf("%d %d\n", i, courses[i].size());
        sort(courses[i].begin(), courses[i].end(), cmp);
        for(int j = 0; j < courses[i].size(); ++j)
        {
            printf("%s\n", name[courses[i][j]]);
        }
    }
    return 0;
}
