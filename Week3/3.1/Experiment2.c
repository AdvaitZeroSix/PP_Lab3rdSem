// 3.1.2. Function Type: Fixed-Rate Computation Without Arguments, With Return Value
#include <stdio.h>
int unitsConsumed = 350;
float ratePerUnit = 6.75;
float calculateBill() {
float total = unitsConsumed * ratePerUnit;
return total;
}
int main() {
    float billAmount = calculateBill();
    printf("Estimated Monthly Electricity Bill: %.2f\n", billAmount);
    printf("Advait\tSaxena\n251090580220\nRno:66\n");
    return 0;
}