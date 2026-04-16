#include <iostream>
using namespace std;

int main() {
    int n = 2, m = 3;
    int arr[2][3] = {{1,2,3},{4,5,6}};

    int start = 0, end = n*m - 1;

    while(start < end) {
        int r1 = start / m;
        int c1 = start % m;

        int r2 = end / m;
        int c2 = end % m;

        swap(arr[r1][c1], arr[r2][c2]);

        start++;
        end--;
    }

    // Print
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}