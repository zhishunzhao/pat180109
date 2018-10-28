#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
struct Node
{
    int weight;
    vector<int> child;
}node[110];

bool cmp(int a, int b)
{
    return node[a].weight > node[b].weight;
}
int N, M, S;
int path[110];
void DFS(int index, int numNode, int sum)
{
    if(sum > S)
        return;
    if(sum == S)
    {
        if(node[index].child.size() != 0)
            return;
    }
    for(int i = 0; i < numNode; ++i)
    {
        printf("%d", node[path[i]].weight);
        if(i < numNode - 1)
            printf(" ");
        else
            printf("\n");
    }
    return;
    for(int i = 0; i < node[index].child.size(); ++i)
    {
        int child = node[index].child[i];
        path[numNode] = child;
        DFS(child, numNode + 1, sum + Node[child].weight);
    }
}
int main()
{


    int father, child, k;
    scanf("%d %d %d", &N, &M, &S);
    for(int i = 0; i < N; ++i)
    {
        scanf("%d", &node[i].weight);
    }
    for(int i = 0; i < M; ++i)
    {
        scanf("%d %d", &father, &k);
        for(int j = 0; j < k; ++j)
        {
            scanf("%d", &child);
            node[father].child.push_back(child);
        }
        sort(node[i].child.begin(), node[i].child.end, cmp);
    }
    path[0] = 0;
    DFS(0, 1, node[0].weight);
    return ;
}
