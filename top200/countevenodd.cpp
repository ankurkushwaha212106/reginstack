#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,2,3,4,5,6};
    int n = arr.size();
    int even_count = 0;
    int odd_count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] % 2 == 0)
        {
            even_count++;
        }
        else
        odd_count++;
    }
    cout<<"even_count = "<<even_count<<endl;
     cout<<"odd_count = "<<odd_count<<endl;
     return 0;
}