#include<iostream>
#include<cstdio>
#include<string>
#include<stack>
#include<map>
#include<queue>
using namespace std;

struct Node
{
    double num;
    char op;
    bool flag;
};

string str;
stack<Node> s;
queue<Node> q;
map<char, int> op;

void change()//change()函数用来实现中缀表达式转后缀表达式
{
    int k = 0;
    int len = str.length();
    double num;
    Node temp;
    while(k < len)
    {
        if(str[k] >= '0' && str[k] <= '9')
        {
            temp.flag = true;
            temp.num = str[k++] - '0';
            while(str[k] >= '0' && str[k] <= '9' && k < len)
            {
                temp.num = temp.num * 10 + (str[k] - '0');
                k++;
            }
            q.push(temp);
        }
        else
        {
            temp.flag = false;
            while(!s.empty() && op[str[k]] <= op[s.top().op])
            {
                q.push(s.top());
                s.pop();
            }
            temp.op = str[k];
            s.push(temp);
            k++;
        }
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}

double op2(double t1, double t2, char op1)
{
    double temp;
    if(op1 == '+')
    {
        temp = t1 + t2;
    }
    else
    {
        if(op1 == '-')
        {
            temp = t1 - t2;
        }
        else
        {
            if(op1 == '*')
            {
                temp = t1 * t2;
            }
            else
            {
                temp = t1 / t2;
            }
        }
    }
    return temp;
}

double calc()
{
    double temp1, temp2;
    Node cur, temp;
    while(!q.empty())
    {
        cur = q.front();
        q.pop();
        if(cur.flag == true)
            s.push(cur);
        else
        {
            temp2 = s.top().num;
            s.pop();
            temp1 = s.top().num;
            s.pop();
            temp.flag = true;
            temp.num = op2(temp1, temp2, cur.op);
            s.push(temp);
        }
    }
    return s.top().num;

}

int main()
{
    op['+'] = op['-'] = 1;
    op['*'] = op['*'] = 2;
    while(getline(cin, str), str != "0")
    {
        for(string::iterator it = str.end(); it != str.begin(); it--)
        {
            if(*it == ' ')
            {
                str.erase(it);
            }
        }
        while(!s.empty())
            s.pop();
        change();
        printf("%.2f\n", calc());
    }
}
