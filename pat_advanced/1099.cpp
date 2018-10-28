#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;
const int maxn = 110;
struct Node
{
    int weight;
    int lchild, rchild;
}node[maxn];
int weight[maxn];
int index = 0;
void preorder(int root)
{
    if(node[root].lchild != -1)
        preorder(node[root].lchild);
    node[root].weight = weight[index++];
    if(node[root].rchild != -1)
        preorder(node[root].rchild);
}
void levelorder(int root, int n)
{
    queue<int> qu;
    qu.push(root);
    int temp;
    int ct = 0;
    while(qu.size() != 0)
    {
        temp = qu.front();
        qu.pop();
        printf("%d", node[temp].weight);
        ct++;
        if(ct != n)
            printf(" ");
        if(node[temp].lchild != -1)
            qu.push(node[temp].lchild);
        if(node[temp].rchild != -1)
            qu.push(node[temp].rchild);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int lchild, rchild;
    for(int i = 0; i < n; ++i)
    {
        scanf("%d %d", &lchild, &rchild);
        node[i].lchild = lchild;
        node[i].rchild = rchild;
    }
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &weight[i]);
    }
    sort(weight, weight + n);
    preorder(0);
    levelorder(0, n);
    return 0;

}
