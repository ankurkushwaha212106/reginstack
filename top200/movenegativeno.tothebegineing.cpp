#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1,-1,3,-4,-6,1,2};
    int n = arr.size();
    vector<int> ans;

    
    for(int i=0;i<n;i++)
    {
        if(arr[i] <= 0)
        {
            ans.push_back(arr[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i] >= 1)
        {
            ans.push_back(arr[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}