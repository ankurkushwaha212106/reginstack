#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {2,3,1,5,6,9};
    int n = arr.size();
    vector<int>ans(n,-1);
    for(int i=0;i<n;i++)
    {
        ans[i] = arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] > arr[i])
            {
             ans[i]  = arr[j];
             break;
            }
        }
    }
    cout<<"new array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}