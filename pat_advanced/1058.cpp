#include<stdio.h>
int main()
{
    long long a1 ,b1 ,c1;
    long long a2 ,b2 ,c2;
    scanf("%lld.%lld.%lld %lld.%lld.%lld",&a1, &b1, &c1, &a2, &b2, &c2);
    long long sum=(a1 + a2) * 29 * 17 + (b1 + b2) * 29 + c1 + c2;
    long long a=sum / (29*17);
    printf("%lld.%lld.%lld",a,sum / 29 % 17,sum % 29);
    return 0;
}
