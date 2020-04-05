#include<stdio.h>

int rs[60][60]={0}, cs[60][60]={0}, solved=0,mat[60][60], n, k, t;

void LatMat(int row, int col, int m);
int main() {
    int T;
    scanf(" %d", &T);
    for (t = 1; t <= T; ++t) {
        scanf(" %d %d", &n, &k);
        LatMat(1, 1, 0);
        if (!solved) {
            printf("Case #%d: IMPOSSIBLE\n",t);
        }
        solved = 0;
    }
    return 0;
}

void LatMat(int row, int col, int m) {
    if (row == n && col == n + 1 && m == k && !solved) {
        solved = 1;
        printf("Case #%d: POSSIBLE\n",t);
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                printf("%d ",mat[i][j]);
            }
            printf("\n");
        }
        return;
    } else if (row > n) {
        return;
    } else if (col > n) {
        LatMat(row + 1, 1, m);
    }
    for (int i = 1; i <= n && !solved; ++i) {
        if (!rs[row][i] && !cs[col][i]) {
            rs[row][i] = cs[col][i] = 1;
            if (row == col) {
                m += i;
            }
            mat[row][col] = i;

            LatMat(row, col + 1, m);

            rs[row][i] = cs[col][i] = 0;
            if (row == col) {
                m -= i;
            }
            mat[row][col] = 0;
        }
    }
}
