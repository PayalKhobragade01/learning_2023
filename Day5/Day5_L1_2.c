//reading complex no
#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

struct Complex readComplex() {
    struct Complex number;

    printf("Enter the real part: ");
    scanf("%f", &number.real);

    printf("Enter the imaginary part: ");
    scanf("%f", &number.imaginary);

    return number;
}

int main() {
    struct Complex myComplex;

    myComplex = readComplex();

    printf("The complex number is: %.2f + %.2fi\n", myComplex.real, myComplex.imaginary);

    return 0;
}

//addition of 2 complex no
#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;

    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;

    return result;
}

int main() {
    struct Complex complex1, complex2, sum;

    printf("Enter the real and imaginary parts of the first complex number:\n");
    scanf("%f%f", &complex1.real, &complex1.imaginary);

    printf("Enter the real and imaginary parts of the second complex number:\n");
    scanf("%f%f", &complex2.real, &complex2.imaginary);

    sum = addComplex(complex1, complex2);

    printf("The sum of the complex numbers is: %.2f + %.2fi\n", sum.real, sum.imaginary);

    return 0;
}

// multipcation
#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;

    result.real = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
    result.imaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);

    return result;
}

int main() {
    struct Complex complex1, complex2, product;

    printf("Enter the real and imaginary parts of the first complex number:\n");
    scanf("%f%f", &complex1.real, &complex1.imaginary);

    printf("Enter the real and imaginary parts of the second complex number:\n");
    scanf("%f%f", &complex2.real, &complex2.imaginary);

    product = multiplyComplex(complex1, complex2);

    printf("The product of the complex numbers is: %.2f + %.2fi\n", product.real, product.imaginary);

    return 0;
}





