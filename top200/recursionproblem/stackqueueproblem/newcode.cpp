#include <iostream>
#include <stack>
using namespace std;

int largestRectangleArea(int arr[], int n) {
    stack<int> st;
    int maxArea = 0;

    for (int i = 0; i <= n; i++) {
        int currHeight = (i == n) ? 0 : arr[i];

        while (!st.empty() && currHeight < arr[st.top()]) {
            int height = arr[st.top()];
            st.pop();

            int width;
            if (st.empty())
                width = i;
            else
                width = i - st.top() - 1;

            int area = height * width;
            maxArea = max(maxArea, area);
        }

        st.push(i);
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