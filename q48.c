#include <stdio.h>

int main() {
    int rows = 4, cols = 4;
    int num = 1;

    for (int i = 1; i <= rows; i++) {      
        for (int j = 1; j <= cols; j++) {  
            printf("%d ", num);
            num++;
        }
        printf("\n"); 
    }

    return 0;
}
