#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 1010;
int n;
int index = 0;
int cbt[maxn];
int num[maxn];
void inOrder(int root)
{
    if(root > n)
        return;
    inOrder(root * 2);
    cbt[root] = num[index++];
    inOrder(root * 2 + 1);
}
int main()
{
    // int n;
    scanf("%d", &n);
    // int num[maxn];
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &num[i]);
    }
    sort(num, num + n);
    inOrder(1);
    for(int i = 1; i <= n; ++i)
    {
        printf("%d", cbt[i]);
        if(i != n)
            printf(" ");
    }
    return 0;
}
