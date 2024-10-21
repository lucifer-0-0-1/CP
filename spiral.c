#include<stdio.h>
#include<stdlib.h>

int* spiralOrder(int** matrix, int n, int *m, int *h) {
    int* arr = (int*)malloc(n * *m * sizeof(int));
    *h = 0;
    int top = 0, bottom = n - 1, left = 0, right = *m - 1;

    // Traverse the matrix in spiral order
    while (top <= bottom && left <= right) {
        // Traverse from left to right
        for (int i = left; i <= right; i++) {
            arr[(*h)++] = matrix[top][i];
        }
        top++;

        // Traverse from top to bottom
        for (int i = top; i <= bottom; i++) {
            arr[(*h)++] = matrix[i][right];
        }
        right--;
        //check for ending
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                arr[(*h)++] = matrix[bottom][i];
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                arr[(*h)++] = matrix[i][left];
            }
            left++;
        }
    }

    return arr;
}

int main() {
    int n, m;
    int h;
    scanf("%d %d", &n, &m);
    int** matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(m * sizeof(int));
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int* arr = spiralOrder(matrix, n, &m, &h);

    // Print the array arr
    for (int i = 0; i < h; i++) {
        printf("%d ", arr[i]);
    }

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
    free(arr);

    return 0;
}
