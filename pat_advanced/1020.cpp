#include<stdio.h>
#include<queue>
using namespace std;
struct Node
{
    int data;
    Node* lchild;
    Node* rchild;
};
int PostOrder[50], InOrder[50];

Node* CreateBTree(int PostL, int PostR, int InL, int InR)
{
    if(PostL > PostR)
    {
        return NULL;
    }
    Node* node = new Node;
    node->data = PostOrder[PostR];
    node->lchild = NULL;
    node->rchild = NULL;
    int k;
    for(int i = InL; i <= InR; ++i)
    {
        if(InOrder[i] == PostOrder[PostR])
        {
            k = i;
        }
    }
    node->lchild = CreateBTree(PostL, PostL + k - InL - 1, InL, k - 1);
    node->rchild = CreateBTree(PostL + k - InL, PostR - 1, k + 1, InR);
    return node;
}

void bfs(Node* head, int n)
{
    queue<Node*> q;
    int count = n;
    q.push(head);
    while(!q.empty())
    {
        Node* p = q.front();
        q.pop();
        printf("%d", p->data);
        if(count != 1)
        {
            printf(" ");
        }
        count--;
        if(p->lchild != NULL)
        {
            q.push(p->lchild);
        }
        if(p->rchild != NULL)
        {
            q.push(p->rchild);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &PostOrder[i]);
    }
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &InOrder[i]);
    }
    Node *p = CreateBTree(0, n - 1, 0, n - 1);
    bfs(p, n);
    return 0;
}
