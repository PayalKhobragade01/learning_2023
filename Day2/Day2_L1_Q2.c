#include <stdio.h>
#include<string.h>

//using pointer
void swap(void* a, void* b, size_t size) {
    char temp[size];

    // Copy the contents of 'a' to 'temp'
    memcpy(temp, a, size);

    // Copy the contents of 'b' to 'a'
    memcpy(a, b, size);

    // Copy the contents of 'temp' to 'b'
    memcpy(b, temp, size);
}

int main() {
    int num1 = 10, num2 = 20;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2, sizeof(int));
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    double d1 = 3.14, d2 = 2.71;
    printf("Before swap: d1 = %lf, d2 = %lf\n", d1, d2);
    swap(&d1, &d2, sizeof(double));
    printf("After swap: d1 = %lf, d2 = %lf\n", d1, d2);

    char c1 = 'A', c2 = 'B';
    printf("Before swap: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swap: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}

//using type casting
#include <stdio.h>

void swap(void* a, void* b) {
    void* temp;

    temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 10, num2 = 20;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    double d1 = 3.14, d2 = 2.71;
    printf("Before swap: d1 = %lf, d2 = %lf\n", d1, d2);
    swap(&d1, &d2);
    printf("After swap: d1 = %lf, d2 = %lf\n", d1, d2);

    char c1 = 'A', c2 = 'B';
    printf("Before swap: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2);
    printf("After swap: c1 = %c, c2 = %c\n",c1,c2);
return 0;
}
