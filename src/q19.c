#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Square pattern of size %d:\n", n);
        for (i = 1; i <= n; i++) {
    
            for (j = 1; j <= n; j++) {
                printf("* ");
            }
            printf("\n"); 
        }
    }

    return 0;
}
