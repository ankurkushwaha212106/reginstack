#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,-2,0,3,4,-7,6};
    int n = arr.size();
    int target;
    cin>>target;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
            if(arr[i]+arr[j]+arr[k] == 0)
            {
                cout<<
                count++;
            }
            }
        }
    }
}