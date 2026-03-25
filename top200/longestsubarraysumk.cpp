#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,1,1,2,3,4,5};
    int n = arr.size();
    int k = 3;
    int maxLen = 0;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum += arr[j];
                if(sum == k)
            {
                maxLen = max(maxLen,j-i+1);
            }
        }
    }
       cout<<maxLen;
    return 0;
    
}