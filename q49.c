#include <stdio.h>

int main() {
    int rows = 4, cols = 4;
    char ch = 'A'; 

    for (int i = 1; i <= rows; i++) {       
        for (int j = 1; j <= cols; j++) {   
            printf("%c ", ch);
            ch++; 
        }
        printf("\n"); 
    }

    return 0;
}
