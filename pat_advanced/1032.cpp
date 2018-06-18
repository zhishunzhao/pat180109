#include<stdio.h>
#include<stack>
using namespace std;

struct Node
{
  char ch;
  int next;
}node[100010];
stack<int> st1, st2;
int main()
{
  int wd1_head, wd2_head, num;
  int addr, next;
  char ch;
  scanf("%d %d %d", &wd1_head, &wd2_head, &num);
  for(int i = 0; i < num; ++i)
  {
    scanf("%d %c %d", &addr, &ch, &next);
    node[addr].ch = ch;
    node[addr].next = next;
  }
  int tra_idx = wd1_head;
  while(node[tra_idx].next != -1)
  {
    st1.push(tra_idx);
    tra_idx = node[tra_idx].next;
  }
  st1.push(tra_idx);
  tra_idx = wd2_head;
  while(node[tra_idx].next != -1)
  {
    st2.push(tra_idx);
    tra_idx = node[tra_idx].next;
  }
  st2.push(tra_idx);
  int ans = -1;
  while(!st1.empty() && !st2.empty())
  {
    if(st1.top() == st2.top())
    {
      ans = st1.top();
      st1.pop();
      st2.pop();
    }
    else
    {
      break;
    }
  }
  if(ans != -1)
  {
    printf("%05d", ans);
  }
  else
  {
    printf("-1");
  }
  return 0;






}
