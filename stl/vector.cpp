#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    vector<int> vi;
    for(int i = 1; i <= 5; ++i)
    {
        vi.push_back(i);
    }
    //ʹ�õ���������
    for(vector<int>::iterator it = vi.begin(); it != vi.end(); it++)
    {
        printf("%d ", *it);
    }
    printf("\n");
    //ʹ���±����
    for(int i = 0; i < 5; ++i)
    {
        printf("%d ", vi[i]);
    }
    printf("\n");
    //pop_back����
    vi.pop_back();
    for(int i = 0; i < vi.size(); ++i)
    {
        printf("%d ", vi[i]);
    }
    //clear()
    vi.clear();
    printf("\n%d\n", vi.size());
    for(int i = 1; i <= 5; ++i)
    {
        vi.push_back(i);
    }
    //insert()
    vi.insert(vi.end(), -1);
    for(int i = 0; i < vi.size(); ++i)
    {
        printf("%d ", vi[i]);
    }
    printf("\n");
    /*erase(), 1. erase(it),ɾ��һ��Ԫ�أ�2.erase(it1, it2)ɾ������������Ԫ��*/
    vi.erase(vi.begin() + 2);
    printf("%d\n", vi.size());
    vi.erase(vi.begin(), vi.end());
    printf("%d\n", vi.size());

    return 0;


}
