#include <iostream>
using namespace std;

int largestRectangleArea(int arr[], int n) {
    int maxArea = 0;

    for(int i = 0; i < n; i++) {
        int height = arr[i];
        int left = i, right = i;

        // left expand
        for(int j = i; j >= 0; j--) {
            if(arr[j] >= height)
                left = j;
            else
                break;
        }

        // right expand
        for(int j = i; j < n; j++) {
            if(arr[j] >= height)
                right = j;
            else
                break;
        }

        int width = right - left + 1;
        int area = height * width;

        if(area > maxArea)
            maxArea = area;
    }

    return maxArea;
}

int main() {
    int arr[] = {2, 1, 5, 6, 2, 3};
    int n = 6;

    cout << "Largest Rectangle Area = " 
         << largestRectangleArea(arr, n);

    return 0;
}