#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string str = "abcd";
    for(int i = 0; i < str.size(); ++i)//length��size����������
    {
        printf("%c", str[i]);
    }
    //ͨ��c_str()��������ַ���
    printf("\n%s\n", str.c_str());
    //ͨ������������
    for(string::iterator it = str.begin(); it != str.end(); it++)
    {
        printf("%c", *it);
    }
    printf("\n");
    //�ַ���ƴ��
    string s1 = "Hello ";
    string s2 = "World";
    string s3 = s1 + s2;
    cout << s3 << endl;
    return 0;
}
