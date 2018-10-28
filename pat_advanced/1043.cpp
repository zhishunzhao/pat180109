#include<cstdio>
const int maxn = 110;
struct Node
{
    int data;
    struct Node *lchild;
    struct Node *rchild;
};
void insert(Node* &root, int data)
{
    if(root == NULL)
    {
        root = new Node;
        root->data = data;
        root->lchild = NULL;
        root->rchild = NULL;
        return;
    }
    if(data < root->data)
        insert(root->lchild, data);
    else
        insert(root->rchild, data);
}
void preOrder(Node* root, vector<int>& vi)
{
    if(root == NULL)
        return;
    vi.push_back(root->data);
    preOrder(root->lchild, vi);
    preOrder(root->rchild, vi);
}
//镜像树
void preOrderMirror(node *root, )
int main()
{
    int n;
    scanf("%d", &n);
    int a[maxn];
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    Node* root = NULL;
    //root = NULL;
    insert(root, a, n);
}
