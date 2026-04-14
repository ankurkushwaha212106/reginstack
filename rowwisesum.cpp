#include<bits/stdc++.h>
using namespace std;
int main()

for(int i = 0; i < n; i++) {
    int sum = 0;
    for(int j = 0; j < m; j++) {
        sum += arr[i][j];
    }
    cout << "Row " << i << " sum = " << sum << endl;
}