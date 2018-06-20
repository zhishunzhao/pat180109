#include<stdio.h>
struct Node
{
    int data;
    int next;
}node[100010];

struct Node2
{
    int data;
    int index;
}node2[100010];

int move_forward_k(int np, int k)
{
    int t= np;
    for(int i = 1; i < k; ++i)
    {
        t = node[np].next;
    }
    return t;
}

int main()
{
    int first_node, num, k;
    int addr, data, next;
    scanf("%d %d %d", &first_node, &num, &k);
    for(int i = 0; i < num; ++i)
    {
        scanf("%d %d %d", &addr, &data, &next);
        node[addr].data = data;
        node[addr].next = next;
    }
    int np = first_node;
    int count = 0;
    while(np != -1)
    {
        np = node[np].next;
        count++;
    }
    // printf("%d\n", count);
    int rest_node_num = count;
    np = first_node;
    while(rest_node_num >= k)
    {
        rest_node_num -= k;
        for(int i = 0; i < k; ++i)
        {

            node2[i].index = np;
            node2[i].data = node[np].data;
            np = node[np].next;
        }
        for(int i = k - 1; i >= 0; --i)
        {
            if(i > 0)
            {
                printf("%05d %d %05d\n", node2[i].index, node2[i].data, node2[i - 1].index);
            }
            else
            {
                printf("%05d %d ", node2[0].index, node2[0].data);
                if(rest_node_num == 0)
                    printf("-1\n");
                else
                {
                    if(rest_node_num >= k)
                    {
                        printf("%05d\n", move_forward_k(np, k));
                    }
                    else
                    {
                        printf("%05d\n", np);
                        while(rest_node_num > 0)
                        {
                            if(rest_node_num == 1)
                            {
                                printf("%05d %d -1\n", np, node[np].data);
                            }
                            else
                            {
                                printf("%05d %d %05d\n", np, node[np].data, node[np].next);
                            }
                            np = node[np].next;
                            rest_node_num--;
                        }
                        return 0;

                    }
                }
            }
        }
    }

}
