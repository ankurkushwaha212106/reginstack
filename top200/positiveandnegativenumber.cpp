#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,-2,3,-3,4,5,6,-7};
    int n = arr.size();
    int positive_count = 0;
    int negative_count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] >= 0)
        {
            positive_count++;
        }
        else
        negative_count++;
    }
    cout<<"positive_count"<<positive_count<<endl;
    cout<<"negative_count"<<negative_count<<endl;
return 0;
}