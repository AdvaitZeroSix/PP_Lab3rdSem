#include <stdio.h>
void checkRange(int a, int b);
void checkPrime(int n, int d, int b);
void checkRange(int a, int b)
{
    if (a > b)
        return;
    checkPrime(a, 2, b);
}
void checkPrime(int n, int d, int b)
{
    if (d == n)
    {
        printf("%d ", n);
        checkRange(n + 1, b);
        return;
    }
    if (n % d != 0)
    {
        checkPrime(n, d + 1, b);
    }
    else
    {
        checkRange(n + 1, b);
    }
}
int main()
{
    int a, b;
    printf("Enter range: ");
    scanf("%d %d", &a, &b);
    printf("Prime numbers: ");
    checkRange(a, b);
    printf("\nAdvait\tSaxena\n251090580220\nRno:66\n");
    return 0;
}