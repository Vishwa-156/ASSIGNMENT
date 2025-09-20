#include <stdio.h>

int main() {
    int n = 5; // number of rows

    for (int i = n; i >= 1; i--) {
        
        for (int s = 0; s < n - i; s++) {
            printf(" ");
        }
       
        for (int j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }
        printf("\n"); 
    }

    return 0;
}
