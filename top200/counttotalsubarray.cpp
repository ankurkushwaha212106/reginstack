#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,4};
    int n = arr.size();
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<"  ";
               
            }
            cout<<endl;
            count++;
        }
    }
    cout<<"total subarray"<<count;
    return 0;
}