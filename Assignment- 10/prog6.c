//Write a program to add, subtract and multiply two complex numbers using structures to function.
#include<stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex add(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}
struct Complex subtract(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real - num2.real;
    result.imag = num1.imag - num2.imag;
    return result;
}
struct Complex multiply(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real * num2.real - num1.imag * num2.imag;
    result.imag = num1.real * num2.imag + num1.imag * num2.real;
    return result;
}
int main() {
    struct Complex num1, num2, result;
    printf("Enter real and imaginary parts of first complex number:\n");
    printf("Real: ");
    scanf("%f", &num1.real);
    printf("Imaginary: ");
    scanf("%f", &num1.imag);
    printf("\nEnter real and imaginary parts of second complex number:\n");
    printf("Real: ");
    scanf("%f", &num2.real);
    printf("Imaginary: ");
    scanf("%f", &num2.imag);
    result = add(num1, num2);
    printf("\nSum of complex numbers: %.2f + %.2fi\n", result.real, result.imag);
    result = subtract(num1, num2);
    printf("Difference of complex numbers: %.2f + %.2fi\n", result.real, result.imag);
    result = multiply(num1, num2);
    printf("Product of complex numbers: %.2f + %.2fi\n", result.real, result.imag);
    return 0;
}
