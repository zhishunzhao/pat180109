#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string str = "abcd";
    for(int i = 0; i < str.size(); ++i)//length和size方法都可以
    {
        printf("%c", str[i]);
    }
    //通过c_str()方法输出字符串
    printf("\n%s\n", str.c_str());
    //通过迭代器访问
    for(string::iterator it = str.begin(); it != str.end(); it++)
    {
        printf("%c", *it);
    }
    printf("\n");
    //字符串拼接
    string s1 = "Hello ";
    string s2 = "World";
    string s3 = s1 + s2;
    cout << s3 << endl;
    return 0;
}
