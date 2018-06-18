#include<stdio.h>
#include<algorithm>
using namespace std;

struct Node
{
  int key;
  int next;
}node[100010];
struct Node2
{
  int index;
  int key;
}node2[20010];

bool cmp(Node2 a, Node2 b)
{
  return a.key < b.key;
}
int main()
{
  int N, head_idx;
  int key, addr, next;
  scanf("%d %d", &N, &head_idx);
  for(int i = 0; i < N; ++i)
  {
    scanf("%d %d %d", &addr, &key, &next);
    if(addr > 0)
    {
      node[addr].key = key;
      node[addr].next = next;
    }
  }
  int tra_idx = head_idx;
  int j = 0;
  if(tra_idx == -1)
    printf("0 -1\n");
  else
  {
    while(node[tra_idx].next != -1)
    {
      node2[j].index = tra_idx;
      node2[j].key = node[tra_idx].key;
      tra_idx = node[tra_idx].next;
      j++;
    }
    node2[j].index = tra_idx;
    node2[j].key = node[tra_idx].key;
    sort(node2, node2 + j + 1, cmp);
    printf("%d %d\n", j + 1, node2[0].index);
    for(int i = 0; i <= j; ++i)
    {
      if(i != j)
        printf("%05d %d %05d\n", node2[i].index, node2[i].key, node2[i+1].index);
      else
        printf("%05d %d -1\n", node2[i].index, node2[i].key);

    }
  }



}
