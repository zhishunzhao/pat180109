#include<stdio.h>
#include<vector>
#include<cmath>
using namespace std;
struct Node
{
    vector<int> child;
}node[100010];
int min_depth = 1e12, min_depth_num = 0;
// int mark;
void DFS(int index, int depth)
{
    if(node[index].child.size() == 0)
    {
        if(depth < min_depth)
        {
            min_depth = depth;
            min_depth_num = 1;
        }
        else
        {
            if(depth == min_depth)
            {
                min_depth_num += 1;
            }

        }
        return;
    }
    for(int i = 0; i < node[index].child.size(); ++i)
    {
        DFS(node[index].child[i], depth + 1);
    }
}
int main()
{
    int N;
    double P, r;
    int father;
    int k, child;
    scanf("%d %lf %lf", &N, &P, &r);
    r /= 100;
    for(int i = 0; i < N; ++i)
    {
        scanf("%d", &k);
        for(int j = 0; j < k; ++j)
        {
            scanf("%d", &child);
            node[i].child.push_back(child);
        }

    }
    DFS(0, 0);
    printf("%.4f %d\n", P * pow(1 + r, min_depth), min_depth_num);
    return 0;
}
