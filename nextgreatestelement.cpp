#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3,4,1,5,8,9,22};
    int n = 7;
    vector<int>ans(n, -1);
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
        if(arr[i] < arr[j])
        {
            ans[i] = arr[j];
            break;
        }
       }
    }
    cout<<"new array";
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
   
    return 0;
}