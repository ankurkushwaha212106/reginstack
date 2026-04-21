#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,2,3,4,4,5};
    int n = 7;

    for(int i = 0; i < n; i++) {
        bool unique = true;
        for(int j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                unique = false;
                break;
            }
        }
        if(unique) cout << arr[i] << " ";
    }
}