#include<cstdio>
#include<set>
using namespace std;
int main()
{
    set<int> st;
    //insert()
    st.insert(3);
    st.insert(5);
    st.insert(2);
    st.insert(3);
    //ʹ�õ���������
    for(set<int>::iterator it = st.begin(); it != st.end(); it++)
    {
        printf("%d ", *it);
    }
    printf("\n");
}
