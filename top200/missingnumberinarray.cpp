#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,5,6,7};
    int n = arr.size() +1;
    int total = n*(n+1)/2;
    int sum =0;
    for(int i=0;i<arr.size();i++)
    {
        sum +=  arr[i];
    }
    cout<<"missing number"<<total - sum;
     return 0;
}