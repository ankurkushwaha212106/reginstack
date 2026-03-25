#include<bits/stdc++.h>
using namespace std;
int main()
{
   // int n;
    vector<int>arr = {1,3,4,5,8,1};
    int n = arr.size();
    int largest = INT_MIN;
    int index = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
            index = i;
        }
    }
    cout<<"largest element"<<largest<<"  "<<endl;
    cout<<"index of largest element"<< index <<endl;
    return 0;

}