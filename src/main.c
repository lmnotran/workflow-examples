#include <stdio.h>
#include "addition.h"

int main() {
    double a, b, result;
    
    printf("Enter two numbers:\n");
    printf("A: ");
    if (scanf("%lf", &a) != 1) {
        printf("Error: Invalid input for A\n");
        return 1;
    }
    
    printf("B: ");
    if (scanf("%lf", &b) != 1) {
        printf("Error: Invalid input for B\n");
        return 1;
    }
    
    result = my_addition(a, b);
    printf("The sum of %.2f and %.2f is %.2f\n", a, b, result);
    
    return 0;
}