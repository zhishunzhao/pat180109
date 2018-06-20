#include<stdio.h>
#include<algorithm>
#include<cstring>
using namespace std;

const int maxn = 100010;
bool isExist[10010] = {false};
struct Node
{
    int data;
    int next;
    int order;
    int addr;
}node[maxn];

bool cmp(Node a, Node b)
{
    return a.order < b.order;
}


int main()
{
    memset(isExist, false, sizeof(isExist));
    int head_node, n, addr, data, next;
    scanf("%d %d", &head_node, &n);
    //printf("%d\n", n);
    for(int j = 0; j < n; ++j)
    {
        scanf("%d %d %d", &addr, &data, &next);
        //printf("%d %d %d", addr, data, next);
        node[addr].addr = addr;
        node[addr].data = data;
        node[addr].next = next;
    }

    for(int i = 0; i < maxn; ++i)
    {
        node[i].order = 2 * maxn;
    }
    int np = head_node;
    int type2_num = 0, type1_num = 0;
    while(np != -1)
    {
        if(isExist[abs(node[np].data)])
        {
            node[np].order = maxn + type2_num;
            type2_num++;
        }
        else
        {
            node[np].order = type1_num++;
            isExist[abs(node[np].data)] = true;
        }
        np = node[np].next;
    }
    sort(node, node + maxn, cmp);
    for(int i = 0; i < type1_num; ++i)
    {
        if(i != type1_num - 1)
        {
            printf("%05d %d %05d\n", node[i].addr, node[i].data, node[i + 1].addr);
        }
        else
        {
            printf("%05d %d -1\n", node[i].addr, node[i].data);
        }
    }
    for(int i = 0; i < type2_num; ++i)
    {
        if(i != type2_num - 1)
        {
            printf("%05d %d %05d\n", node[i + type1_num].addr, node[i + type1_num].data, node[i + type1_num + 1].addr);
        }
        else
        {
            printf("%05d %d -1\n", node[i + type1_num].addr, node[i + type1_num].data);
        }
    }
}
