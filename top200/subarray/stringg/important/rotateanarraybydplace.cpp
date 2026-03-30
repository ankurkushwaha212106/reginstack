#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,4,5};
    // k = 2
   //  3,4,5,1,2
    vector<int>ans;
    int n = arr.size();
int k;
cin>>k;
for(int i=k;i<n;i++)
{
    k = k % n;
    ans.push_back(arr[i]);


}
for(int i=0;i<k;i++)
{
    ans.push_back(arr[i]);
}
 cout<<"new rotated array";
 for(int i=0;i<n;i++)
 {
    cout<<ans[i];
 }  
 return 0;
}