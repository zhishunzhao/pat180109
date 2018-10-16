#include<stdio.h>
#include<cmath>
#include<vector>
const int maxn = 100010;
using namespace std;
struct Node
{
    double data;
    vector<int> child;
}node[maxn];
double sum = 0.0;
void DFS(int index, int depth, int r)
{
    if(node[index].child.size() == 0)
    {
        sum += node[index].data * pow((1 + r), depth);
        return;
    }

    for(int i = 0; i < node[index].child.size(); ++i)
    {
        DFS(node[index].child[i], depth + 1, r);
    }

}
int main()
{
    int N;
    double P, r;
    int ki, temp;
    double data;
    scanf("%d %lf %lf", &N, &P, &r);
    r /= 100;
    // printf("Debug0");
    for(int i = 0; i < N; ++i)
    {
        scanf("%d", &ki);
        if(ki != 0)
        {
            for(int j = 0; j < ki; ++j)
            {
                scanf("%d", &temp);
                node[i].child.push_back(temp);
            }
        }
        else
        {
            scanf("%lf", &data);
            node[i].data = data;
        }
    }
    // printf("Debug1");
    DFS(0, 0, r);
    printf("%.1f\n", P * sum);
    return 0;
}
