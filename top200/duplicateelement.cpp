#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {2,3,4,5,5,6,7,8};
    int n = arr.size();
//     for(int i=0;i<n;i++)
//     {
//     for(int j=i+1;j<n;j++)
//     {
//         if(arr[i] == arr[j])
//         cout<<"duplicate element"<<arr[i]<<"  ";
        
//     }
// }
sort(arr.begin(),arr.end());
for(int i=0;i<n;i++)
{
    if(arr[i] == arr[i+1])
    {
        cout<<"duplicate element"<<arr[i]<<"   ";
    }
}
    return 0;
}