#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = 4;

    int product = 1;

    for(int i = 0; i < n; i++) {
        product = product * arr[i];
    }

    cout << "Product = " << product;

    return 0;
}