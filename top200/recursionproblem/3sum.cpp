#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {2,3,4,5,6,7};
    int n = arr.size();
    int target;
    cin>>target;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int sum = arr[i] + arr[j] + arr[k];
                if(sum == target)
                {
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                return 0;
            }
        } 
            
        }
    }
    cout<<"not founf"<<endl;
    return 0;
}