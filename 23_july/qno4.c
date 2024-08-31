#include <stdio.h>
int main() {
    float unitCharge, totalBill, surcharge;
    int units;
    printf("Enter the electricity units consumed: ");
    scanf("%d", &units);
    if (units <= 50) {
        unitCharge = units * 0.50;
    } else if (units <= 150) {
        unitCharge = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        unitCharge = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        unitCharge = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }
    surcharge = unitCharge * 0.20;
    totalBill = unitCharge + surcharge;
    printf("Total electricity bill: Rs. %.2f\n", totalBill);

    return 0;
}
