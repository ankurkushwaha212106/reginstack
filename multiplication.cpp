int a[10][10], b[10][10], c[10][10];

for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
        c[i][j] = 0;
        for(int k = 0; k < p; k++) {
            c[i][j] += a[i][k] * b[k][j];
        }
    }
}