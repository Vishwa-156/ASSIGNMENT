#include <stdio.h>

int main() {
    int n = 4; // height of top half

    // Top half
    for (int i = 1; i <= n; i++) {
        // print leading spaces
        for (int s = 1; s <= n - i; s++) {
            printf("  "); // two spaces for alignment
        }
        // increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Bottom half
    for (int i = n - 1; i >= 1; i--) {
       
        for (int s = 1; s <= n - i; s++) {
            printf("  ");
        }
        
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
       
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
