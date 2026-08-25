#include <stdio.h>
int findMax(int arr[], int n, int index, int max)
{
    if (index == n)
        return max;
    if (arr[index] > max)
        max = arr[index];
    return findMax(arr, n, index + 1, max);
}
int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int max = findMax(arr, n, 1, arr[0]);
    printf("Maximum element = %d", max);
    printf("\nAdvait\tSaxena\n251090580220\nRno:66\n");
    return 0;
}