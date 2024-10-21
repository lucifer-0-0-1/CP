#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to find the minimum difference of chocolates
int min_diff_chocolates(int n, int m, int chocolates[]) {
    // Sort the chocolates array
    qsort(chocolates, n, sizeof(int), compare);
    
    // Initialize the minimum difference to a large value
    int min_diff = INT_MAX;
    
    // Traverse the sorted chocolates array to find the minimum difference
    for (int i = 0; i <= n - m; i++) {
        int current_diff = chocolates[i + m - 1] - chocolates[i];
        if (current_diff < min_diff) {
            min_diff = current_diff;
        }
    }
    return min_diff;
}
int main(){
    int n, m;
    scanf("%d %d", &m, &n);
    int *chocolates;
    chocolates = (int*)malloc(sizeof(int*));
    for(int i =0;i<n;i++){
        scanf("%d\n", &chocolates[i]);
    }
    int ans = min_diff_chocolates(n, m, chocolates);
    printf("%d ", ans);
}