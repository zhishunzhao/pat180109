#include<stdio.h>
struct Node
{
    int parent;
    int lchild, rchild;

}Tree[110];
int main()
{
    int N, M, S;
    int NonLeadNum, NonLeadNo;
    bool is_leaf[110] = false;
    int a[110];
    scanf("%d%d%d", &N, &M);
    int a[110];
    for(int i = 0; i < N; ++i)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < M; ++i)
    {
        scanf("%d %d", &NonLeafNo, &NonLeadNum);
        is_leaf[NonLeafNo] = true;
        for(int j = 0; j < NonLeadNum; ++j)
        {
            scanf("%d", &temp);
            Tree[temp] -> parent = NonLeafNo;
        }

    }


}
