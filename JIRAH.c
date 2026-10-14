#include <stdio.h>

int main(){
    int a, b, sum, difference, quotient, product;

    printf("=======================\n");
    printf("enter first number: ");
    scanf("%d", &a);
   printf("enter second number: ");
    scanf("%d", &b);

    sum = a + b;
    difference = a - b;
    quotient = a / b;
    product = a * b;

    printf("======RESULT======\n");
    printf("sum: %d\n", sum);
    printf("difference: %d\n", difference);
    printf("quotient: %d\n", quotient);
    printf("product: %d\n", product);
return 0;
    return 0;
}