#include <stdio.h>
int sumEven(int n){
    if(n==0){
        return 0;
    }
    int digit=n%10;
    if (digit % 2 == 0)
    return digit + sumEven(n / 10);
        else
    return sumEven(n / 10);
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Sum of even digits = %d", sumEven(n));
    printf("\nAdvait\tSaxena\n251090580220\nRno:66\n");
    return 0;
}
