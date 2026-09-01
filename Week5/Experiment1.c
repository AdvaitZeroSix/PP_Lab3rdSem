//5.1. Display Complete Process Memory Layout/Segments and Memory Addresses in C
#include <stdio.h>
#include <stdlib.h>
int globalInt = 100;
float globalFloat = 25.5;
static char globalChar = 'A';
int uninitializedInt;
float uninitializedFloat;
static int staticUninitialized;
const char *message = "C Programming";
void function1() {
    printf("Inside function1()\n");
}
void function2() {
    printf("Inside function2()\n");
}
void displayMemory() {
    int localInt = 25;
    float localFloat = 12.5;
    char localChar = 'X';
    int *heapInt = malloc(sizeof(int));
    if (heapInt == NULL)
        return;
    *heapInt = 500;
    printf("\n======STACK=======\n");
    printf("localInt: %p\n", (void *)&localInt);
    printf("localFloat: %p\n", (void *)&localFloat);
    printf("localChar: %p\n", (void *)&localChar);
    printf("\n=====HEAP=====\n");
    printf("heapInt: %p\n", (void *)heapInt);
    printf("\n=====BSS=====\n");
    printf("uninitializedInt: %p\n", (void *)&uninitializedInt);
    printf("uninitializedFloat: %p\n", (void *)&uninitializedFloat);
    printf("staticUninitialized: %p\n", (void *)&staticUninitialized);
    printf("\n=====DATA======\n");
    printf("globalInt: %p\n", (void *)&globalInt);
    printf("globalFloat: %p\n", (void *)&globalFloat);
    printf("globalChar: %p\n", (void *)&globalChar);
    printf("\n=====RO-DATA=====\n");
    printf("String: %p\n", (void *)message);
    printf("\n======TEXT=====\n");
    printf("function1: %p\n", (void *)function1);
    printf("function2: %p\n", (void *)function2);
    free(heapInt);
    printf("\nAdvait Saxena\n251090580220\n066");
}
int main() {
    displayMemory();
    return 0;
}
