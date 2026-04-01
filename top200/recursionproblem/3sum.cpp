#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {2,1,1,2,4,5,6,7};
    int n = arr.size();
    int target;
    cin>>target;
    int count =0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int sum = arr[i] + arr[j] + arr[k];
                if(sum == target)
                {
                    count++;
                cout<<count;
                }
                return 0;
            
        } 
            
        }
    }
    cout<<"not founf"<<endl;
    return 0;
}