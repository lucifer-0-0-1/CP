#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int mini(int *arr, int n){
    int minimum = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<minimum){
            minimum=arr[i];
        }
    }
    return minimum;
}
int maxNumberOfBalloons(char* ransomNote) {
    char magazine[] = "balloon";
    int b = 0,a=0,l2=0,o2=0,n=0;
    int arr[1000];
    for(int i=0;i<strlen(ransomNote);i++){
        if(ransomNote[i] == 'b'){b++;}
        else if(ransomNote[i] == 'a'){a++;}
        else if(ransomNote[i] == 'l'){l2++;}
        else if(ransomNote[i] == 'o'){o2++;}
        else if(ransomNote[i] == 'n'){n++;}
    }
    l2 = l2/2;
    o2 = o2/2;
    arr[0] = b;
    arr[1] = a;
    arr[2] = l2;
    arr[3] = o2;
    arr[4] = n;
    int count = mini(arr, 5);
    return count;
}

int main() {
    char *ransomNote;
    ransomNote = (char*)malloc(sizeof(char*));
    printf("Enter ransom note and magazine: ");
    scanf("%s", ransomNote);
    int ans = maxNumberOfBalloons(ransomNote);
    printf("%d\n", ans);
    return 0;
}