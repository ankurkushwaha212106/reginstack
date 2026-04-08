#include <iostream>
using namespace std;

int main() {
    int n = 2, m = 2;

    int A[2][2] = { {1, 2}, {3, 4} };
    int B[2][2] = { {5, 6}, {7, 8} };

    int C[2][2];

    // Addition
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Output
    cout << "Result Matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}