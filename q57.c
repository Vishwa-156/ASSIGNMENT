#include <stdio.h>

int main() {
    int n = 5; 
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            int num;

            if (i <= j && i <= n - j + 1)
                num = i;
            else if (j <= i && j <= n - i + 1)
                num = j;
            else if (n - i + 1 <= j && n - i + 1 <= n - j + 1)
                num = n - i + 1;
            else
                num = n - j + 1;

            printf("%d", num);
        }
        printf("\n");
    }

    return 0;
}
