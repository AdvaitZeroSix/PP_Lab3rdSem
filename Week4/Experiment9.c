#include <stdio.h>
int frequency(int a[], int left, int right, int target)
{
    if (left > right)
        return 0;
    if (left == right)
    {
        if (a[left] == target)
            return 1;
        return 0;
    }
    int mid = (left + right) / 2;
    return frequency(a, left, mid, target)
         + frequency(a, mid + 1, right, target);
}
int main()
{
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter search element: ");
    scanf("%d", &target);
    printf("Frequency of %d = %d", target,
           frequency(a, 0, n - 1, target));
           printf("\nAdvait\tSaxena\n251090580220\nRno:66\n");
    return 0;
}