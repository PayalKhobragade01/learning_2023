#include <stdio.h>

void printExponent(double x) {
  // Pointer to interpret the double value as an unsigned long long
    unsigned long long *ptr = (unsigned long long *)&x; 
    // Extract the exponent bits
    unsigned long long exponent = (*ptr & 0x7FF0000000000000) >> 52; 

    // Print in hexadecimal format
    printf("Exponent (Hex): 0x%llx\n", exponent);

    // Print in binary format
    printf("Exponent (Binary): ");
    for (int i = 11; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}