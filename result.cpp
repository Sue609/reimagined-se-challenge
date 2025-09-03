#include <iostream>
#include <string>
using namespace std;

int main() {
    // Constants for prices
    const double ADULT_HAIRCUT = 15.50;
    const double CHILD_HAIRCUT = 10.50;
    const double GREEN_ADULT_DISCOUNT = 3.50;
    const double GREEN_CHILD_DISCOUNT = 2.50;
    const double BLUE_ADULT_DISCOUNT = 2.59;
    const double BLUE_CHILD_DISCOUNT = 1.50;

    // Variables to store user input
    int couponCode;
    string haircutType;
    double finalCharge;

    // Input: Prompt user for coupon code
    cout << "Enter coupon code (1 for Green, 2 for Blue, 0 for None): ";
    cin >> couponCode;

    // Input: Prompt user for haircut type
    cout << "Enter haircut type (adult/kid): ";
    cin >> haircutType;

    // Logic to determine the final charge based on inputs
    if (haircutType == "adult") {
        if (couponCode == 1) {
            finalCharge = ADULT_HAIRCUT - GREEN_ADULT_DISCOUNT;
        } else if (couponCode == 2) {
            finalCharge = ADULT_HAIRCUT - BLUE_ADULT_DISCOUNT;
        } else {
            finalCharge = ADULT_HAIRCUT;
        }
    } else if (haircutType == "kid") {
        if (couponCode == 1) {
            finalCharge = CHILD_HAIRCUT - GREEN_CHILD_DISCOUNT;
        } else if (couponCode == 2) {
            finalCharge = CHILD_HAIRCUT - BLUE_CHILD_DISCOUNT;
        } else {
            finalCharge = CHILD_HAIRCUT;
        }
    } else {
        // Handle invalid haircut type
        cout << "Invalid haircut type entered. Please restart the program." << endl;
        return 1; // Exit program with an error code
    }

    // Output: Display the final charge
    cout << "The final haircut charge is: $" << finalCharge << endl;

    return 0;
}
