// 3.2.2. With Arguments and With Return Value scenario
#include <stdio.h>
float calculateTotal(float prices[], int count) {
    float total = 0;
    for (int i = 0; i < count; i++) {
        total += prices[i];
    }
    return total;
}
int main() {
    float prices[4];
    for (int i = 0; i < 4; i++){
        printf("%d item price: ",i+1);
        scanf("%f",&prices[i]);
    }
    float bill = calculateTotal(prices, 4);
    printf("Total Bill: %.2f\n", bill);
    printf("Advait\tSaxena\n251090580220\nRno:66\n");
    return 0;
}
