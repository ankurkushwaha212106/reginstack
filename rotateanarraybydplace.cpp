#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,4,5,6};
    int n = arr.size();
    int d;
    cout<<"enter the value of d";
    cin>>d;
    d = d % n;
    for(int i=0;i<=n+i-d;i++)
    {
     
    }
    cout<<"after rotation";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}