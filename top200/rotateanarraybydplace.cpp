#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,4,5,6};
    int n = arr.size();
    int k;
    cin >> k;

    k = k % n;  // handle k > n
    vector<int> temp(n);

    for(int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    arr = temp;  // assign the rotated array

    // print result
    for(int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}