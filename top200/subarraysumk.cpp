#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {2,3,4,5,6,1};
    int n = arr.size();
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum += arr[j];
            if(sum == k)
            {
                cout<< i << " "<< j << endl;
            }
        }
    }
    return 0;
}