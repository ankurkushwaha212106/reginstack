#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,4,5,6};
    int n = arr.size();
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        ans.push_back(arr[i]);
    }
    cout<<"new array";
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<"  ";
    }
    return 0;
}