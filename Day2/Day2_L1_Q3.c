#include <stdio.h>
//using array

int sumAlternate(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = sumAlternate(arr, size);

    printf("Sum of alternate elements: %d\n", result);

    return 0;
}
 //using loops
 #include <stdio.h>

int sumAlternate(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            sum += arr[i];
        }
    }

    return sum;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = sumAlternate(arr, size);

    printf("Sum of alternate elements: %d\n", result);

    return 0;
}

//using basic operators
#include <stdio.h>

int sumAlternate(int arr[], int size) {
    int sum = arr[0] + arr[size - 1];
    return sum;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = sumAlternate(arr, size);

    printf("Sum of alternate elements: %d\n", result);

    return 0;
}
