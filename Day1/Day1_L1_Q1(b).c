//using ternary function
#include <stdio.h>

int findLargest(int a, int b) {
    int largest = (a > b) ? a : b;
    return largest;
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int result = findLargest(num1, num2);
    printf("The largest number is: %d\n", result);
    return 0;
}