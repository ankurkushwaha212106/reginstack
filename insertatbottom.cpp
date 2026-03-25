#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[]= {2,3,4,5,6};
int n = 5;
stack<int>st,temp;
for(int i=0;i<n;i++)
{
    st.push(arr[i]);
}
int x = 1;
while(!st.empty())
{
  temp.push(st.top());
  st.pop();
}
st.push(x);

 while(!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }

    // print result
    cout << "After inserting at bottom: ";
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}

    