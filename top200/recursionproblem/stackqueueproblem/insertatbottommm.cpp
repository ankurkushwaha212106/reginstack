#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {2,3,4,5,6};
    int x = 10;
   // int n = arr.size()+1;
    stack<int>st;
    st.push(x);
    for(int i=0;i<arr.size()+1;i++)
    {
     st.push(arr[i]);
    }
   
   int i=0;
   while(!st.empty())
   {
    arr.push_back(st.top());
    st.pop();

   }
   cout<<"new array";
   for(int i=0;i<arr.size();i++)
   {
    cout<<arr[i]<<"  ";
   }
   return 0;

}