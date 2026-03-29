#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,4,5,2,3,8,4,1};
    int n = arr.size();
    int total =0;
    int k;
    cout<<"enter the value of k";
    cin>>k;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum += arr[j];
      if(sum == k)
      {
        total++;
      }
        }
    }
    cout<<total<<"  ";
    return 0;
}