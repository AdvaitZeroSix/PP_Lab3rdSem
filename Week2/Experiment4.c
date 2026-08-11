#include <stdio.h>
#include <stdlib.h>
int main() {
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int **jagged = (int **)malloc(rows * sizeof(int *));
    if (jagged == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    int *size = (int *)malloc(rows * sizeof(int));
    if (size == NULL) {
        printf("Memory allocation failed.\n");
        free(jagged);
        return 1;
    }
    for (i = 0; i < rows; i++) {
        printf("Enter number of elements in Row %d: ", i + 1);
        scanf("%d", &size[i]);
        jagged[i] = (int *)malloc(size[i] * sizeof(int));
        if (jagged[i] == NULL) {
            printf("Memory allocation failed.\n");
            for (j = 0; j < i; j++) {
                free(jagged[j]);
            }
            free(size);
            free(jagged);
            return 1;
        }
    }
    printf("Enter the elements:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d:\n", i + 1);
        for (j = 0; j < size[i]; j++) {
            scanf("%d", &jagged[i][j]);
        }
    }
    printf("Jagged Array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < size[i]; j++) {
            printf("%d ", jagged[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < rows; i++) {
        free(jagged[i]);
    }
    free(size);
    free(jagged);
    printf("Memory released successfully.\n");
    return 0;
}
