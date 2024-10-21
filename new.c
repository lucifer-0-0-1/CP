#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int check_epic(int *months, int t){
    int if_epic = 0;
    for(int i=0;i<t;i++){
        if((months[i]>months[i-1])&&(months[i]>months[i+1])){
            if_epic++;
        }
    }
    return if_epic;
}

int main() {
    int n; 
    int t;
    int *months;
    months = (int*)malloc(sizeof(int*));
    scanf("%d", &n);
    while(n!=0){
        scanf("%d ", &t);
        for(int i=0;i<t;i++){
            scanf("%d ", &months[i]);
        }
        int ans = check_epic(months, t);
        printf("%d", ans);
        n--;
    }
}