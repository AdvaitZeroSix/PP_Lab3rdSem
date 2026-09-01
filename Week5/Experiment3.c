//Heap Memory Lifecycle and Address Tracking
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr, i;
    ptr = malloc(3 * sizeof(int));
    if (ptr == NULL)
        return 1;
    printf("\nAfter malloc:\n");
    for (i = 0; i < 3; i++)
        printf("ptr[%d] Address = %p\n", i, (void *)&ptr[i]);
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    printf("\nAfter initialization:\n");
    for (i = 0; i < 3; i++)
        printf("ptr[%d] = %d, Address = %p\n",
               i, ptr[i], (void *)&ptr[i]);
    printf("\nUsing memory:\n");
    for (i = 0; i < 3; i++)
        printf("Value = %d, Address = %p\n",
               ptr[i], (void *)&ptr[i]);
    ptr = realloc(ptr, 5 * sizeof(int));
    if (ptr == NULL)
        return 1;
    ptr[3] = 40;
    ptr[4] = 50;
    printf("\nAfter realloc:\n");
    for (i = 0; i < 5; i++)
        printf("ptr[%d] = %d, Address = %p\n",
               i, ptr[i], (void *)&ptr[i]);
    free(ptr);
    ptr = NULL;
    printf("\nMemory released.\n");
    printf("ptr = %p\n", (void *)ptr);
    printf("\nAdvait Saxena\n251090580220\n066");
    return 0;
}
