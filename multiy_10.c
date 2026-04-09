#include <stdio.h>

int main() {
    float a, b, sum, diff, div, mult;
    char o;

    printf("Enter the operator you want (+ - / *):\n");
    scanf("%c", &o);

    printf("Enter the two numbers:\n");
    scanf("%f %f", &a, &b);

    if (o == '+') {
        sum = a + b;
        printf("The sum of two numbers is %f\n", sum);
    } else if (o == '-') {
        diff = a - b;
        printf("The difference of two numbers is %f\n", diff);
    } else if (o == '/') {
        if (b == 0) {
            printf("Error: Division by zero!\n");
        } else {
            div = a / b;
            printf("The division of two numbers is %f\n", div);
        }
    } else if (o == '*') {
        mult = a * b;
        printf("The multiplication of two numbers is %f\n", mult);
    } else {
        printf("Invalid operator!\n");
    }

    return 0;
}