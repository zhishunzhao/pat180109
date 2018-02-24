#include<stdio.h>
#include<algorithm>
using namespace std;

struct Mooncake
{
    double store;
    double sale;
    double price;
}mooncake[1010];

bool cmp(Mooncake a, Mooncake b)
{
    return a.price > b.price;
}

int main()
{
    int N;
    scanf("%d", &N);
    double D;
    scanf("%lf", &D);
    for(int i = 0; i < N; ++i)
    {
        scanf("%lf", &mooncake[i].store);
    }
    for(int i = 0; i < N; ++i)
    {
        scanf("%lf", &mooncake[i].sale);
        mooncake[i].price = mooncake[i].sale / mooncake[i].store;
    }
    sort(mooncake, mooncake + N, cmp);
    double ans = 0;
    for(int i = 0; i < N; ++i)
    {
        if(mooncake[i].store <= D)
        {
            D -= mooncake[i].store;
            ans += mooncake[i].sale;
        }
        else
        {
            ans += mooncake[i].price * D;
            break;
        }
    }
    printf("%.2f", ans);
    return 0;

}
