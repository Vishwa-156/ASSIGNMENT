#include <stdio.h>

int main() {
    int n = 5; 

   
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j == i || j == n - i + 1)
                printf("%d", j);
            else
                printf(" ");
        }
        printf("\n");
    }

   
    for (int i = 2; i >= 1; i--) {
        for (int j = 1; j <= 5; j++) {
            if (j == i || j == n - i + 1)
                printf("%d", j);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
