#include<stdio.h>
#include<vector>
#include<cmath>
using namespace std;
struct Node
{
    vector<int> child;
}node[100010];
int max_depth = 0, max_depth_num = 0;
int mark;
void DFS(int index, int depth)
{
    if(node[index].child.size() == 0)
    {
        if(depth > max_depth)
        {
            max_depth = depth;
            max_depth_num = 1;
        }
        else
        {
            if(depth == max_depth)
            {
                max_depth_num += 1;
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
    scanf("%d %lf %lf", &N, &P, &r);
    r /= 100;
    for(int i = 0; i < N; ++i)
    {
        scanf("%d", &father);
        if(father != -1)
        {
            node[father].child.push_back(i);
        }
        else
        {
            mark = i;
        }

    }
    DFS(mark, 0);
    printf("%.2f %d\n", P * pow(1 + r, max_depth), max_depth_num);
    return 0;
}
