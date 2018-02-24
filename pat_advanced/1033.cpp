#include<stdio.h>
#include<algorithm>
using namespace std;

struct Station
{
    double price;
    double distance;
}sta[510];

bool cmp(Station a, Station b)
{
    return a.distance < b.distance;
}
int main()
{
    double Cmax, D, Davg;
    int N;
    scanf("%lf %lf %lf %d", &Cmax, &D, &Davg, &N);
    for(int i = 0; i < N; ++i)
    {
        scanf("%lf %lf", &sta[i].price, &sta[i].distance);
    }
    sort(sta, sta + N, cmp);
    sta[N].distance = D;
    sta[N].price = 0;
    if(sta[0].distance != 0)
        printf("The maximum travel distance = 0.00");
    int j = 0;

    double dis = Cmax * Davg;
    double left_dis = 0;
    double left_oil = 0;
    double ans = 0;
    while(j < N)
    {
        int num = 0;
        for(int i = j + 1; i <= N; ++i)
        {
            if(sta[i].distance - sta[j].distance <= dis)
            {
                num++;
            }
        }
        if(num == 0)
        {
            printf("The maximum travel distance = %.2f", sta[j].distance + dis);
            return 0;
        }
        double min_price = sta[j].price;
        int min_pos = j;
        for(int i = j + 1; i <= j + num; ++i)
        {
            if(sta[i].price < min_price)
            {
                min_price = sta[i].price;
                min_pos = i;
                break;
            }
        }

        if(j == min_pos)
        {
            //jiaman;
            ans += ((Cmax - left_oil) * sta[j].price);

            left_dis = dis - (sta[j + num].distance - sta[j].distance);
            left_oil = left_dis / Davg;
            j += num;
        }
        else
        {
            //jiadaoquzuipianyidedifang;
            if(left_dis < (sta[min_pos].distance - sta[j].distance))
            {
                ans += (sta[min_pos].distance - sta[j].distance - left_dis) / Davg * sta[j].price;
                left_dis = 0;
                left_oil = 0;
            }
            else
            {
                left_dis -= (sta[min_pos].distance - sta[j].distance - left_dis);
                left_oil = left_dis / Davg;
            }
            j = min_pos;
        }
    }
    printf("%.2f", ans);
    return 0;
}
