#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b); // Ascending order
}

bool containsDuplicate(int* nums, int numsSize) {
    bool see = false;
    int min = nums[0];
    qsort(nums, numsSize, sizeof(int), compare);
    for(int i=1;i<numsSize;i++){
        if(nums[i] == nums[i-1]){
            see = true;
        }
    }
    return see;
}

int main(){
    int n = 5;
    int *num; 
    num = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
    }
    containsDuplicate(num, n);
}