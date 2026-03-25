#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>arr = {2,3,8,3,5,2,6};
   int n = arr.size();
   int max = INT_MIN;
   int min = INT_MAX;
   int difference = 0;
   for(int i=0;i<n;i++)
   {
    if(arr[i] > max)
    {
        max = arr[i];
    }
    else if(arr[i] < min)
    {
        min = arr[i];
    }
    difference = max - min;
   }
   cout<<"differenecr between max and min"<<difference<<endl;
   return 0;
}