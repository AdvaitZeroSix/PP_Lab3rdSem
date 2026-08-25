#include <stdio.h>
#include <string.h>
void reverse(char str[], int index)
{
    if (str[index] == '\0')
        return;
    reverse(str, index + 1);
    printf("%c", str[index]);
}
int main()
{
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    printf("Reversed string = ");
    reverse(str, 0);
    printf("\nAdvait\tSaxena\n251090580220\nRno:66\n");
    return 0;
}