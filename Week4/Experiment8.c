#include <stdio.h>
int sum(int a[], int n)
{
    if (n == 0)
        return 0;
    return a[n - 1] + sum(a, n - 1);
}
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Sum = %d", sum(a, n));
    printf("\nAdvait\tSaxena\n251090580220\nRno:66\n");
    return 0;
}