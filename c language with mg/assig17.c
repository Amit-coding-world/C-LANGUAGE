// 1. write a recursive function to calculate sum of first n natural nos
// 2. write a recursive function to calculate sum of first n odd natural number
// 3. write a recursive function to calculate sum of first n even natural number
// 4. write  a recursive function to calculate sum of first square of first n natural nos
// 5. write a recursive function  to calculate of sum of digit of a given no.
// 6. write a recursive function to calculate factorial of a given nos.
// 7. write a recursive function to calculate hcf of two nos.
// 8. write a recursive function to print first n terms of fibonacci series
// 9. write a program in c to count the digits first n terms of a given no. using recursive 
// 10. write a program in c to calculate the power of any no. using recursion
#include"stdio.h"
// int sum_n(int);
// int sumodd(int);
// int sumeven(int);
// int sumsquare(int);
// int sumdigit(int);
// int factorial(int);
// int main()
{
    int z,x;
    printf("enter the number=");
    scanf("%d",&x);
    // z=sum_n(x);
    // z=sumodd(x);
    // z=sumeven(x);
    // z=sumsquare(x);
    // z=sumdigit(x);
    // z=factorial(x);
    printf("\n%d",z);

    return 0;
}
int sum_n(int n)
{
    if(n==1)
        return 1;
    return n+sum_n(n-1);
}
int sumodd(int n)
{
    if(n==1)
        return 1;
    return 2*n-1 + sumodd(n-1);
}
int sumeven(int n)
{
    if(n==1)
        return 2;
    return 2*n+sumeven(n-1);
}
int sumsquare(int n)
{
    if (n==1)
        return 1;
    return n*n+sumsquare(n-1);
}
int sumdigit(int n)
{
    if(n==0)
        return 0;
    return n%10 + sumdigit(n/10);
}
int factorial(int n)
{
    if(n==0)
        return 1;
    return n*factorial(n-1);

}
// 7. write a recursive function to calculate hcf of two nos.
// 8. write a recursive function to print first n terms of fibonacci series
// 9. write a program in c to count the digits first n terms of a given no. using recursive 
// 10. write a program in c to calculate the power of any no. using recursion

7. Recursive HCF Function


#include <stdio.h>

int hcf(int a, int b) {
    if (b == 0)
        return a;
    else
        return hcf(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("HCF: %d", hcf(num1, num2));
    return 0;
}


8. Recursive Fibonacci Function


#include <stdio.h>

int fibonacci(int n) {
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++)
        printf("%d ", fibonacci(i));
    return 0;
}


9. Recursive Digit Counter


#include <stdio.h>

int countDigits(int n) {
    if (n == 0)
        return 0;
    else
        return 1 + countDigits(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number of digits: %d", countDigits(num));
    return 0;
}


10. Recursive Power Function


#include <stdio.h>

double power(double base, int exponent) {
    if (exponent == 0)
        return 1;
    else if (exponent % 2 == 0)
        return power(base * base, exponent / 2);
    else
        return base * power(base * base, (exponent - 1) / 2);
}

int main() {
    double base;
    int exponent;
    printf("Enter base and exponent: ");
    scanf("%lf %d", &base, &exponent);
    printf("%.2lf^%d = %.2lf", base, exponent, power(base, exponent));
    return 0;
}


