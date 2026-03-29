#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1,2,-2,5,-1,1,3,4,-7};
    int n = arr.size();
    int total = 0;

    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = i; j < n; j++)
        {
            sum += arr[j]; 

            if(sum == 0)
            {
                total++;
            }
        }
    }

    cout << total;
    return 0;
}