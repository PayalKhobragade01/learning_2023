#include <stdio.h>

int bit_operations(int num, int oper_type) {
    if (oper_type == 1) {
        num |= (1 << 0);   // Set 1st bit
    } else if (oper_type == 2) {
        num &= ~(1 << 31); // Clear 31st bit
    } else if (oper_type == 3) {
        num ^= (1 << 15);  // Toggle 16th bit
    }

    return num;
}

int main() {
    int num, oper_type, result;

    printf("Enter the 32-bit integer: ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    result = bit_operations(num, oper_type);

    printf("Result: %d\n", result);

    return 0;
}
