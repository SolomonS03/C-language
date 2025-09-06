//Rupees exchange provided there is a constraint in number of 100’s, 50’s and 10’s
#include <stdio.h>

int main() {
    int amount;
    int hundreds, fifties, tens;
    int avail100, avail50, avail10; // constraints

    // Input total amount
    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    // Input available notes for each denomination
    printf("Enter available 100's: ");
    scanf("%d", &avail100);
    printf("Enter available 50's: ");
    scanf("%d", &avail50);
    printf("Enter available 10's: ");
    scanf("%d", &avail10);

    // Calculate 100's
    hundreds = amount / 100;
    if (hundreds > avail100)
        hundreds = avail100;
    amount = amount - hundreds * 100;

    // Calculate 50's
    fifties = amount/50;
    if (fifties>avail50)
        fifties = avail50;
    amount = amount - fifties*50;

    // Calculate 10's
    tens = amount/10;
    if (tens>avail10)
        tens = avail10;
    amount = amount - tens*10;

    // Output results
    printf("100's: %d\n", hundreds);
    printf("50's: %d\n", fifties);
    printf("10's: %d\n", tens);

    if (amount > 0)
        printf("Remaining amount that cannot be given: %d\n",amount);

    return 0;
}
