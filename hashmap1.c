#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int numJewelsInStones(char* jewels, char* stones) {
    int count = 0;
    int n=strlen(stones);
    int m =strlen(jewels);
    for (int i = 0; i <n; i++){
        for(int j = 0;j < m;j++){
            if(jewels[j] == stones[i]){
                count++;
            }
        } 
    }
    return count;
}
int main(){
    char stones[50], jewels[50];
    scanf("%s %s", &stones, &jewels);
    int num = numJewelsInStones(jewels, stones);
    printf("%d", num);
}