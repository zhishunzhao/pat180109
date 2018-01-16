#include<stdio.h>
#include<string.h>
struct Stu
{
    char name[15];
    char id[15];
    int score;
}male, female;
int main()
{
    int n;
    scanf("%d", &n);
    char name[15], gender, id[15];
    int score;
    int count1 = 0, count2 = 0;
    male.score = 101;
    female.score = -1;
    for(int i = 0; i < n; ++i)
    {
        scanf("%s %c %s %d", name, &gender, id, &score);
        if(gender == 'M')
        {
            count1++;
            if(score < male.score)
            {
                male.score = score;
                strcpy(male.name, name);
                strcpy(male.id, id);
            }
        }
        else
        {
            count2++;
            if(score > female.score)
            {
                strcpy(female.name, name);
                strcpy(female.id, id);
                female.score = score;
            }
        }
    }
    if(count2 > 0)
        printf("%s %s\n", female.name, female.id);
    else
        printf("Absent\n");
    if(count1 > 0)
        printf("%s %s\n", male.name, male.id);
    else
        printf("Absent\n");
    if(count1 > 0 && count2 > 0)
        printf("%d\n", female.score - male.score);
    else
        printf("NA\n");
    return 0;
}
