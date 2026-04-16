for(int j = 0; j < m; j++) {
    int top = 0, bottom = n - 1;
    while(top < bottom) {
        swap(arr[top][j], arr[bottom][j]);
        top++;
        bottom--;
    }
}