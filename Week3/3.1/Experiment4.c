// 3.1.4. With Arguments and With Return Value
#include <stdio.h>
float calculateInterest(float principal, float rate, int time) {
    float interest = (principal * rate * time) / 100;
    return interest;
}
int main() {
    float principal, rate, earnedInterest;
    int time;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (%% per annum): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%d", &time);
    earnedInterest = calculateInterest(principal, rate, time);
    printf("Interest earned on fixed deposit: %.2f\n", earnedInterest);
    printf("Advait\tSaxena\n251090580220\nRno:66\n");
    return 0;
}   