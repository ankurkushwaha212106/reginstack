#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1,2,-2,5,-1,1,3,4,-7};
    int n = arr.size();
    int total = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int sum = 0; // reset here ✅

            for(int k = i; k <= j; k++) // include j ✅
            {
                sum += arr[k];
            }

            if(sum == 0)
            {
                total++;
            }
        }
    }

    cout << total;
    return 0;
}