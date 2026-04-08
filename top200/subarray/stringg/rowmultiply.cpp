#include <iostream>
using namespace std;

int main() {
    int n = 2, m = 3, p = 2;

    int A[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int B[3][2] = { {7, 8}, {9, 10}, {11, 12} };

    int C[2][2] = {0};

    // Matrix Multiplication
    for(int i = 0; i < n; i++) {          // rows of A
        for(int j = 0; j < p; j++) {      // columns of B
            for(int k = 0; k < m; k++) {  // common
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output
    cout << "Result Matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}