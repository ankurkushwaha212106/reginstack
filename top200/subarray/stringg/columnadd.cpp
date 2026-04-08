#include <iostream>
using namespace std;

int main() {
    int n = 3, m = 3;

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Column-wise sum
    for(int j = 0; j < m; j++) {
        int sum = 0;

        for(int i = 0; i < n; i++) {
            sum += arr[i][j];
        }

        cout << "Column " << j+1 << " Sum = " << sum << endl;
    }

    return 0;
}