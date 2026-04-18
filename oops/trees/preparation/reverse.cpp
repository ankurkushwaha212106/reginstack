#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,4,5};
    int n = arr.size();
    int i=0,j=n-1;
    while(i<=j)
    {
      swap(arr[i],arr[j]);
      i++;
      j--;  
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}