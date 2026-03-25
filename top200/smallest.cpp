#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {2,3,4,5,1,5,6};
    int n = arr.size();
    int index = arr[0];
    int smallest = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
            index = i;
        }
    }
    cout<<"smallest element"<<smallest<<endl;
    cout<<"index of element"<<index<<endl;
    return 0;

}