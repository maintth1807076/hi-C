#include <stdio.h>
#include <stdlib.h>

int main() {
//    char myName[20];
    char *pointToChar = (char *) malloc(20 * sizeof(char));
    *pointToChar = 'x';
    pointToChar++;
    *pointToChar = 'u';
    pointToChar++;
    *pointToChar = 'a';
    pointToChar++;
    *pointToChar = 'n';
    pointToChar++;
    *pointToChar = ' ';
    pointToChar++;
    *pointToChar = 'h';
    pointToChar++;
    *pointToChar = 'u';
    pointToChar++;
    *pointToChar = 'n';
    pointToChar++;
    *pointToChar = 'g';
    for (int i = 0; i < 20; ++i) {
        printf("%c", *pointToChar);
        pointToChar--;
    }
    return 0;
}