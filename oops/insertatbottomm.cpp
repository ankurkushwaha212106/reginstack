#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    stack<int>temp;
    while(!st.empty())
    {
        temp.push(st.top());
         st.pop();
        }
        st.push(1);
        while(!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
    
    while(!st.empty())
    {
        cout<<st.top()<<"  ";
        st.pop();
    }
    return 0;
}
