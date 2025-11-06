/*
Mark joseph wanyeri 
computer science 
group A 
cut 2 programing 
date 6/11/2025
*/
#include <stdio.h>

int main(void) {
    double hours, wage;
    printf("Enter hours worked\n: ");
    scanf("%lf", &hours);      // read hours (double)
    
    printf("Enter hourly wage\n: ");
    scanf("%lf", &wage);       // read wage (double)
    
    double gross;
    if (hours <= 40.0) {
        gross = hours * wage;
    } else {
        double ot = hours - 40.0;
        gross = 40.0 * wage + ot * wage * 1.5;
    }
    
    double tax;
    if (gross <= 600.0) {
        tax = 0.15 * gross;
    } else {
        tax = 0.15 * 600.0 + 0.20 * (gross - 600.0);
    }
    
    double net = gross - tax;
    
    // Print results with 2 decimal places
    printf("Gross pay: $%.2f\n", gross);
    printf("Taxes:     $%.2f\n", tax);
    printf("Net pay:   $%.2f\n", net);
    
    return 0;
}