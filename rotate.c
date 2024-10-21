#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void rotate(int** matrix, int matrixSize) {
    int** mt;
    mt= (int**)malloc(matrixSize*sizeof(int*));
    for (int i =0;i<matrixSize;i++){
        mt[i] = (int*)malloc(matrixSize*sizeof(int));
    }
    for(int i=0; i<matrixSize;i++){
        for(int j=0;j<matrixSize;j++){
            mt[i][j] = matrix[i][j];
        }
    }
    for(int i=0; i<matrixSize;i++){
        for(int j=0;j<matrixSize;j++){
            matrix[i][j] = mt[abs(j-(matrixSize-1))][i];
        }
    }
}
int main(int argc, char*argv){
    int n;
    scanf("%d\n", &n);
    int** matrix;
    matrix = (int**)malloc(n*sizeof(int*));
    for (int i =0;i<n;i++){
        matrix[i] = (int*)malloc(n*sizeof(int));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d ", &matrix[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ", abs(-2));
        }
        printf("\n");
    }
    rotate(matrix, n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}