#include<stdio.h>
#include<vector>
using namespace std;
struct Node
{
    vector<int> child;
}node[110];
int hashTable[110] = {0};
void DFS(int index, int depth)
{
    hashTable[depth]++;
    // printf("%d\n", index);
    for(int i = 0; i < node[index].child.size(); ++i)
    {
        DFS(node[index].child[i], depth + 1);
    }
}
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int father, k, child;
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
    /*
    for(int i = 0; i < 110; ++i)
    {
        printf("%d ", hashTable[i])
    }
    */
    int maxLevel = -1, maxValue = 0;
    for(int i = 1; i < 110; ++i)
    {
        if(hashTable[i] > maxValue)
        {
            maxValue = hashTable[i];
            maxLevel = i;
        }
    }

    printf("%d %d\n", maxValue, maxLevel);
    return 0;
}
