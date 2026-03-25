#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,4,5,6};
    int n = arr.size();
    int sum = 0;
    for(int i=0;i<n;i++)
    {
         sum += arr[i];
    }
cout<<"sum of array"<<sum<<"  ";
return 0;
}