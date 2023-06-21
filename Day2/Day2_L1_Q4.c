//using array
#include <stdio.h>

int countSetBits(unsigned int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    unsigned int a[3] = {0x1, 0xF4, 0x10001};
    int size = sizeof(a) / sizeof(a[0]);
    int totalSetBits = 0;

    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(a[i]);
    }

    printf("The total number of set bits in the given array is: %d\n", totalSetBits);

    return 0;
}

//using loops
#include <stdio.h>

int countSetBits(unsigned int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    unsigned int a[3] = {0x1, 0xF4, 0x10001};
    int size = sizeof(a) / sizeof(a[0]);
    int totalSetBits = 0;

    for (int i = 0; i < size; i++) {
        unsigned int num = a[i];
        int count = 0;
        while (num) {
            count += num & 1;
            num >>= 1;
        }
        totalSetBits += count;
    }

    printf("The total number of set bits in the given array is: %d\n", totalSetBits);

    return 0;
}

//using  bitwise opertor
#include <stdio.h>

int countSetBits(unsigned int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    unsigned int a[3] = {0x1, 0xF4, 0x10001};
    int size = sizeof(a) / sizeof(a[0]);
    int totalSetBits = 0;

    for (int i = 0; i < size; i++) {
        unsigned int num = a[i];
        int count = 0;
        while (num) {
            num &= (num - 1);
            count++;
        }
        totalSetBits += count;
    }

    printf("The total number of set bits in the given array is: %d\n", totalSetBits);

    return 0;
}
