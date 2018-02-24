#include<cstdio>
#include<string>
#include<iostream>
#include<map>
using namespace std;

bool check(char c)
{
    if(c >= '0' && c <= '9')
        return true;
    else
        if(c >= 'A' && c <= 'Z')
            return true;
        else
            if(c >= 'a' && c <= 'z')
                return true;
            else
                return false;
}
int main()
{
    string str;
    getline(cin, str);
    int len = str.length();
    int i = 0;
    map<string, int>mp;
    while(i < len)
    {
        if(check(str[i]) && i < len)
        {
            string word;
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] += 32;
            }
            word += str[i++];
            while(check(str[i]) && i < len)
            {
                if(str[i] >= 'A' && str[i] <= 'Z')
                {
                    str[i] += 32;
                }
                word += str[i++];
            }
            if(mp.find(word) != mp.end())
            {
                mp[word]++;
            }
            else
            {
                mp[word] = 1;
            }

        }
        else
        {
            i++;
        }
    }
    string ans;
    int MAX = 0;
    for(map<string, int>::iterator it = mp.begin(); it != mp.end(); it++)
    {
        if(it -> second > MAX)
        {
            ans = it -> first;
            MAX = it -> second;
        }
    }
    cout << ans << " " << MAX << endl;
    return 0;
}
