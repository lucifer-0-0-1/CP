//The code is fine but come under runtime error in leetcode, I think some space error
//The python3 version of the same code works properly in this case.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>


bool isValidSudoku(char** board, int boardSize, int *boardColSize) {
    int k=0;
    bool valid = true;
    while(k<9){
        int charcount[256] = {0};
        int charcount1[256] = {0};
        for(int j=0;j<9;j++){
            if(board[k][j] != '.'){
                charcount[(int)board[k][j]]++;
                if(charcount[(int)board[k][j]] > 1){
                    valid = false;
                }
            } 
            if(board[j][k]!='.'){
                charcount1[(int)board[j][k]]++;
                if(charcount1[(int)board[j][k]]>1){
                    valid = false;
                }
            }
        }
        k++;
    }
    int i=1,j=1;
    while(i<8){
        while(j<8){
            int charcount3[256] = {0};
            for(int l=i-1;l<i+2;l++){
                for(int h=j-1;j<j+2;h++){
                    if(board[l][h] != '.'){
                        charcount3[(int)board[l][h]]++;
                        if(charcount3[(int)board[l][h]]>1){
                            valid = false;
                        }
                    }
                }
            }
            j+=3;
        }
        i+=3;
    }
    return valid;
}
int main(){
    char sudoku[10][10];
    /*for(int i=0;i<9;i++){
        sudoku[i]=(char)malloc(9*sizeof(char));
    }*/
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%c\n", &sudoku[i][j]);
        }
    }
    bool isit = isValidSudoku(sudoku, 3, 3);
    if(isit == true){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
}