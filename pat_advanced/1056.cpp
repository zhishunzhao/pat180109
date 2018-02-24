#include<cstdio>
#include<algorithm>
using namespace std;
struct Mice
{
    int weight;
    int seq;
}mi[100];
bool cmp(Mice a, Mice b)
{
    return a.seq < b.seq;
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &mi[i].weight);
    }
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &mi[i].seq);
    }
    sort(mi, mi + n, cmp);
    for(int i = 0; i < n; ++i)
    {
        printf("%d %d\n", mi[i].weight, mi[i].seq);
    }

}
