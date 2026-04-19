#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int start = 0;
    int end  = x;
    int ans = -1;

    while(start <= end)
    {
        long long mid  = start + (end - start)/2;

        if(mid * mid == x)
        {
            ans = mid;
            break;
        }
        else if(mid * mid < x)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << ans;
    return 0;
}