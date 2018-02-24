#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

bool cmp(string a, string b)
{
    return a < b;
}

int main()
{
    vector<string> vi[2510];
    int n, k;
    scanf("%d %d", &n, &k);
    string name;
    int num;
    int course;
    for(int i = 0; i < n; ++i)
    {
        cin >> name >> num;
        for(int j = 0; j < num; ++j)
        {
            scanf("%d", &course);
            vi[course].push_back(name);
        }

    }
    for(int i = 1; i <= k; ++i)
    {
        printf("%d %d\n", i, vi[i].size());
        sort(vi[i].begin(), vi[i].end(), cmp);
        for(int j = 0; j < vi[i].size(); ++j)
        {
            cout << vi[i][j] << endl;
        }
    }
    return 0;
}
