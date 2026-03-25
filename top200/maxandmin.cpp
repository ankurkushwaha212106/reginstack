#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,4,5,2,9,8};
    int n = arr.size();
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > largest) 
        {
            largest = arr[i];

        }
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout<<"largest_element"<<largest<<endl;
        cout<<"smallest_element"<<smallest<<endl;
return 0;
}