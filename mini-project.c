//“Danger Zone Detection System Using 2D Array”

#include <stdio.h>

void scanMatrix(int a[10][10], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] == 1)
                printf("Danger Zone at position (%d, %d)\n", i, j);
        }
    }
}

int main() {
    int r, c, i, j;
    int a[10][10];

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    scanMatrix(a, r, c);

    return 0;
}
