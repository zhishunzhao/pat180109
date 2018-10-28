#include<stdio.h>
#include<vector>
using namespace std;
struct Node
{
    vector<int> child;
}node[110];
int hashTable[110] = {false};
int max_depth = 0;
void DFS(int index, int depth)
{
    if(node[index].child.size() == 0)
    {
        hashTable[depth]++;
        if(depth > max_depth)
        {
            max_depth = depth;
        }
    }
    for(int i = 0; i < node[index].child.size(); ++i)
    {
        DFS(node[index].child[i], depth + 1);
    }
}
int main()
{
    int N, M;
    int father, k, child;
    scanf("%d %d", &N, &M);
    for(int i = 0; i < M; ++i)
    {
        scanf("%d %d", &father, &k);
        for(int j = 0; j < k; ++j)
        {
            scanf("%d", &child);
            node[father].child.push_back(child);
        }
    }
    DFS(1, 1);
    for(int i = 1; i <= max_depth; ++i)
    {
        printf("%d", hashTable[i]);
        if(i != max_depth)
        {
            printf(" ");
        }
    }
    return 0;
}
