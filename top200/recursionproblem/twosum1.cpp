#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {2,3,4,5,6};
    int n = arr.size();
    int target;
    cin>>target;
   // int sum =0;
    int i =0;
    int j = n-1;
    while(i<j)
    {
       // int sum = arr[i] + arr[j];
        if(arr[i] + arr[j] == target)
        {
         cout<<arr[i] << " "<<arr[j]<<endl; 
         return 0; 
        }
        else if(arr[i] + arr[i] > target)
        {
         j--;
        }
        else
        {
            i++;
        }
    }
    cout << "No pair found" << endl;
    return 0;

}