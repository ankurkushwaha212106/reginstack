#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1,2,0,0,1,1,0,0,1};
    int n = arr.size();
   int i=0;
   for(int j=1;j<n;j++)
   {
    if(arr[j] != 0)
    {
        swap(arr[i] , arr[j]);
        i++;
    }
   }
   cout<<"new array";
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<"  ";
   }
   return 0;
}