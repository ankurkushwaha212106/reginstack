#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    stack<int>temp;
    while(!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }
    int x = 10;
    st.push(10);
    while(!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;

}