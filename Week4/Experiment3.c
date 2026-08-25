#include <stdio.h>
#include <stdbool.h>
bool even(int n);
bool odd(int n);
bool even(int n)
{
    if (n == 0)
        return true;
    return odd(n - 1);
}
bool odd(int n)
{
    if (n == 0)
        return false;
    return even(n - 1);
}
int main()
{
    int n;
    printf("\nAdvait\tSaxena\n251090580220\nRno:66\n");
    printf("Enter number: ");
    scanf("%d", &n);
    if (even(n))
        printf("%d is Even", n);
    else
        printf("%d is Odd", n);
    return 0;
}