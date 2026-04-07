#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,4,5};
    stack<int>st;
    for(int i=0;i<arr.size();i++)
    {
        st.push(arr[i]);
    }
     int i=0;
     while(!st.empty())
     {
        arr[i]= st.top();
        st.pop();
        i++;
     }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}