// Calculates the sum and product of two complex numbers
// Modified by
//  Seokhyun Phil Jung (z3459079)
//  Kevin Luxa (z5074984)
//  Ahnaf Aaqif (z5125723)
// Modified on 2017-09-01
// Tutor: Stephen Leung (fri09-kora)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// DO NOT CHANGE THIS STRUCT
typedef struct _complex {
    double real;
    double imaginary;
} complex;

complex complexAdd(complex a, complex b);
complex complexMultiply(complex a, complex b);
complex complexSquare(complex c);

// DO NOT CHANGE THIS MAIN FUNCTION
int main (int argc, char *argv[]) {

    // getting the complex numbers
    complex complex1;
    complex complex2;

    printf("Enter the real part of the first number: ");
    scanf("%lf", &complex1.real);

    printf("Enter the imaginary part of the first number: ");
    scanf("%lf", &complex1.imaginary);

    printf("Enter the real part of the second number: ");
    scanf("%lf", &complex2.real);

    printf("Enter the imaginary part of the second number: ");
    scanf("%lf", &complex2.imaginary);

    // get the sum
    complex added = complexAdd(complex1, complex2);

    // print the sum
    printf("The sum is %.2lf + %.2lfi.\n",
        added.real, added.imaginary);

    // get the product
    complex multiplied = complexMultiply(complex1, complex2);

    // print the product
    printf("The product is %.2lf + %.2lfi.\n",
        multiplied.real, multiplied.imaginary);

    // get the square of num 1
    complex squared = complexSquare(complex1);

    // print the suqare of num 1
    printf("The square of the first number is %.2lf + %.2lfi.\n",
        squared.real, squared.imaginary);

    return EXIT_SUCCESS;
}
// END OF MAIN FUNCTION

// this function returns the sum of two complex numbers
complex complexAdd(complex a, complex b) {
    complex sum = {
        .real = a.real + b.real,
        .imaginary = a.imaginary + b.imaginary
    };
    return sum;
}

// this function returns the product of two complex numbers
complex complexMultiply(complex a, complex b) {
    complex product = {
        .real = a.real * b.real - a.imaginary * b.imaginary,
        .imaginary = a.imaginary * b.real + b.imaginary * a.real
    };
    return product;
}

// this function returns the square of a complex number
complex complexSquare(complex c) {
    return complexMultiply(c, c);
}