#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {11,22,33,44,55,66};
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        // if(i % 2 == 0)
        // {
        //     cout<<arr[i]<<"  ";
        // }
        if(i % 2 != 0)
        {
            cout << arr[i]<<"  ";
        }
    }
    return 0;
}
