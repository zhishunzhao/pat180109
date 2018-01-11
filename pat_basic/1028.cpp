#include<stdio.h>
#include<string.h>
struct Pe
{
    char name[10];
    int y;
    int m;
    int d;
};
struct Pe_2
{
    char name[10];
    int age;
};
int main()
{
    int n;
    scanf("%d", &n);
    Pe temp;
    Pe_2 youngest;
    Pe_2 oldest;
    youngest.age = 18140905;
    oldest.age = 20140907;
    int count = 0;
    while(n--)
    {
        scanf("%s %d/%d/%d", temp.name, &temp.y, &temp.m, &temp.d);
        int age = temp.y * 10000 + temp.m * 100 +temp.d;
        if(age >= 18140906 && age <= 20140906)
        {
            if(age < oldest.age)
            {
                strcpy(oldest.name, temp.name);
                oldest.age = age;
            }
            if(age > youngest.age)
            {
                strcpy(youngest.name, temp.name);
                youngest.age = age;
            }
            count++;
        }
    }
    if(count > 0)
    {
       printf("%d %s %s", count, oldest.name, youngest.name);
    }
    else
    {
        printf("%d", count);
    }
    return 0;
}
