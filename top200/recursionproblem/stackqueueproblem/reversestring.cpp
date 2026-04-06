#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        st.push(s[i]);
    }
    int i=0;
    while(!st.empty())
    {
   s[i] = st.top();
   i++;
   st.pop();
    }
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
    }
    return 0;
}