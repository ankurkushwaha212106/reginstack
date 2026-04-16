for(int i = 0; i < n; i++) {
    int left = 0, right = m - 1;
    while(left < right) {
        swap(arr[i][left], arr[i][right]);
        left++;
        right--;
    }
}