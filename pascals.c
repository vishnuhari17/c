#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &rows);

    // Iterate for each row
    for (i = 0; i < rows; i++) {
        int num = 1;

        // Print spaces for formatting
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Print numbers in the row
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}