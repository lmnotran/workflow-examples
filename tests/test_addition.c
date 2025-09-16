#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "addition.h"

void test_basic_addition() {
    double result = my_addition(2.5, 3.5);
    assert(fabs(result - 6.0) < 1e-9);
    printf("test_basic_addition: PASSED\n");
}

void test_negative_numbers() {
    double result = my_addition(-5.0, 3.0);
    assert(fabs(result - (-2.0)) < 1e-9);
    printf("test_negative_numbers: PASSED\n");
}

void test_zero_addition() {
    double result = my_addition(0.0, 5.0);
    assert(fabs(result - 5.0) < 1e-9);
    printf("test_zero_addition: PASSED\n");
}

void test_large_numbers() {
    double result = my_addition(1000000.0, 2000000.0);
    assert(fabs(result - 3000000.0) < 1e-9);
    printf("test_large_numbers: PASSED\n");
}

int main() {
    printf("Running addition tests...\n");
    
    test_basic_addition();
    test_negative_numbers();
    test_zero_addition();
    test_large_numbers();
    
    printf("All tests passed!\n");
    return 0;
}