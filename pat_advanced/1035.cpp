#include<stdio.h>
#include<string.h>

struct St
{
    char username[15];
    char pwd[15];
    bool flag;
};
void change(St &st);
int main()
{
    St a[1010];
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 0; i < n; ++i)
    {
        scanf("%s %s", a[i].username, a[i].pwd);
        a[i].flag = false;
        change(a[i]);
        if(a[i].flag)
        {
            count++;
        }
    }
    if(count)
    {
        printf("%d\n", count);
        for(int i = 0; i < n; ++i)
        {
            if(a[i].flag)
            {
                printf("%s %s\n", a[i].username, a[i].pwd);
            }
        }
    }
    else
    {
        if(n == 1)
        {
            printf("There is 1 account and no account is modified");
        }
        else
        {
            printf("There are %d accounts and no account is modified", n);
        }
    }
    return 0;


}
void change(St &st)
{
    int len = strlen(st.pwd);
    for(int i = 0; i < len; ++i)
    {
        switch(st.pwd[i])
        {
            case '1':
                st.pwd[i] = '@';
                st.flag = true;

                break;
            case '0':
                st.pwd[i] = '%';
                st.flag = true;

                break;
            case 'l':
                st.pwd[i] = 'L';
                st.flag = true;

                break;
            case 'O':
                st.pwd[i] = 'o';
                st.flag = true;

                break;
            default:
                break;
        }


    }
}
