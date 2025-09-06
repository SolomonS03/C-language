//Calculate the final earnings.
#include <stdio.h>

int main() {
    int morningTickets, eveningTickets;
    float earnings;
    float discount;

    printf("🎥 Welcome to CineMagic Blockbuster Profit Calculator 🎥\n");

    // Input tickets sold
    printf("Enter number of Morning Show tickets sold: ");
    scanf("%d", &morningTickets);
    printf("Enter number of Evening Show tickets sold: ");
    scanf("%d", &eveningTickets);

    // Step 1: Calculate base earnings
    earnings = (morningTickets * 120) + (eveningTickets *150);

    // Step 2: Apply discount if applicable
    if ((morningTickets + eveningTickets) > 200) {
        discount = 0.10*earnings;
        earnings = earnings - discount;
    }

    // Step 3: Apply sponsor bonus
    if (morningTickets < eveningTickets) {
        earnings = earnings + 2000;
    }

    // Output
    printf("\nFinal Earnings: ₹%f\n", earnings);

    return 0;
}
