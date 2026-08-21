// 3.1.1 Function Without Arguments and Without Return Value
#include <stdio.h>
float distance = 120.5;
float costPerKm = 15.0;
int numTravellers = 4;

void calculateTripCost() {
    float totalCost = distance * costPerKm * numTravellers;
    printf("Total cost of the trip: %.2f\n", totalCost);
}
int main() {
    calculateTripCost();
    printf("Advait\tSaxena\n251090580220\nRno:66\n");
    return 0;
}
