#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,4,1,2,3};
    int n = arr.size();
    int ans =0;
    for(int i=0;i<n;i++)
    {
        ans = ans ^ arr[i];
    }
    cout<<"unique element"<<ans<<"  ";
    return 0;

  
}