#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,4,5,2,3,4,9};
    int n = arr.size();
    int target;
    cin>>target;
    set<vector<int>>st;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int sum = arr[i] + arr[j] + arr[k];
                if(sum == target)
                {
                    vector<int>temp = {arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    if(st.empty())
    {
        cout<<"not found"<<endl;
    }
    else
    {
        cout<<st.size();
    }
    return 0;
}