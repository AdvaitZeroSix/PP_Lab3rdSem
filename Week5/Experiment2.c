//Observing Stack Frames During Recursive Function Calls (Recursive Stack Analyzer)
#include <stdio.h>
long factorial(int n, int call) {
    int local = n * 10;

    printf("\nCall: %d\n", call);
    printf("n = %d, Address = %p\n", n, (void *)&n);
    printf("local = %d, Address = %p\n", local, (void *)&local);
    if (n <= 1)
        return 1;

    return n * factorial(n - 1, call + 1);
}
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Invalid number.\n");
        return 1;
    }
    printf("Factorial = %ld\n", factorial(n, 1));
    printf("\nAdvait Saxena\n251090580220\n066");
    return 0;
}
