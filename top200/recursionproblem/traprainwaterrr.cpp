#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr =  {4,2,0,3,2,5};
    int n = arr.size();
    vector<int>leftmax(n);
    vector<int>rightmax(n);
    leftmax[0] = arr[0];
    for(int i=1;i<n;i++)
    {
        leftmax[i] = max(leftmax[i-1],arr[i]);
    }
    rightmax[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
    rightmax[i] = max(rightmax[i+1],arr[i]);
}
int water =0;
for(int i=0;i<n;i++)
{
    water += min(leftmax[i],rightmax[i]) - arr[i];
}
cout<<water;
return 0;
}