#include<cstdio>
#include<string>
#include<iostream>
#include<map>
#include<set>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    map<string, set<int> >mp;
    string title, author, keywords, publisher, year;
    int id;
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &id);
        getchar();
        getline(cin, title);
        getline(cin, author);
        getline(cin, keywords);
        getline(cin, publisher);
        getline(cin, year);
        mp[title].insert(id);
        mp[author].insert(id);
        int len = keywords.length();
        int j = 0;
        while(j < len)
        {
            if((keywords[j] >= 'a' && keywords[j] <= 'z') || (keywords[j] >= 'A' && keywords[j] <= 'Z') || (keywords[j] >= '0' && keywords[j] <= '9') && j < len)
            {
                string word;
                word += keywords[j++];
                while((keywords[j] >= 'a' && keywords[j] <= 'z') || (keywords[j] >= 'A' && keywords[j] <= 'Z') || (keywords[j] >= '0' && keywords[j] <= '9') && j < len)
                {
                    word += keywords[j++];
                }
                mp[word].insert(id);
            }
            else
                j++;
        }
        mp[publisher].insert(id);
        mp[year].insert(id);

    }
    int m;
    scanf("%d", &m);
    int type;
    string temp;
    for(int i = 0; i < m; ++i)
    {
        scanf("%d: ", &type);
        getline(cin, temp);
        printf("%d: ", type);
        cout << temp << endl;
        if(mp.find(temp) == mp.end())
        {
            printf("Not Found\n");
        }
        else
        {
            for(set<int>::iterator it = mp[temp].begin(); it != mp[temp].end(); ++it)
            {
                cout << *it << endl;
            }
        }
    }

}
