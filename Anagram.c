#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool canConstruct(char* ransomNote, char* magazine) {
    int char_count[256] = {0};
    for (int i = 0; i < strlen(magazine); i++) {
        char_count[(int)magazine[i]]++;
    }

    for (int i = 0; i < strlen(ransomNote); i++) {
        if(strlen(ransomNote) == strlen(magazine)){
        if (char_count[(int)ransomNote[i]] == 0) {
            return false;
        }
        char_count[(int)ransomNote[i]]--;
        }
        else{
            return false;
        }
    }

    return true;
}

int main() {
    char *ransomNote;
    char *magazine;
    ransomNote = (char*)malloc(sizeof(char*));
    magazine = (char*)malloc(sizeof(char*));
    printf("Enter ransom note and magazine: ");
    scanf("%s %s", ransomNote, magazine);

    bool ans = canConstruct(ransomNote, magazine);

    if (ans) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}