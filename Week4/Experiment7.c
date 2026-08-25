#include <stdio.h>
int nested(int n)
{
    if (n <= 0)
        return 1;
    if (n == 1)
        return 2;
    int result = nested(n - 1);
    return result + n;
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Result = %d", nested(n));
    printf("\nAdvait\tSaxena\n251090580220\nRno:66\n");
    return 0;
}