#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {2,3,4,5,6};
    int n = arr.size();
    int target;
    cin>>target;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
         if(arr[i] + arr[j] == target)
         {
         cout<< i <<" "<< j <<endl;
         return 0;
        }
    }
    }
    cout<<"not found"<<endl;
    return 0;
}