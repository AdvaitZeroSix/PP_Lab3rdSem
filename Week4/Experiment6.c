#include <stdio.h>
void reverse(int arr[], int index, int n)
{
    if (index == n)
        return;
    reverse(arr, index + 1, n);
    printf("%d ", arr[index]);
}
int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Reverse order: ");
    reverse(arr, 0, n);
    printf("\nAdvait\tSaxena\n251090580220\nRno:66\n");
    return 0;
}