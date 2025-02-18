// 1.write a function to calculate LCM of two nos.(tsrs)
// #include"stdio.h"
// int lcm(int,int);
// int main()
// {
//     int x=2,y=3,n;
//     n=lcm(x,y);
//     printf("lcm of two number=%d",n);
//     return 0;
// }
// int lcm(int a,int b)
// {
//     int i;
//     for(i=a>b?a:b;i<=a*b;i++)
//     if(i%a==0 && i%b==0)
//     return i;
// }

// 2.write a function to calculate hcf of two nos.(tsrs)
// #include"stdio.h"
// int hcf(int, int);
// int main()
// {   
//     int a=5,b=7,n;
//     n=hcf(a,b);
//     printf("hcf of two number=%d",n);
//     return 0;
// }
// int hcf(int x, int y)
// {
//     int i;
//     for(i=x>y?x:y;i>=1;i--)
//     if(x%i==0 && y%i==0)
//     return i;

// }

// 3.write a function to check whether a given nos prime or not(tsrs).

// #include "stdio.h"
// int prime(int);
// int main()
// {   
//     int x=8,y;
//     y=prime(x);
//     printf("%d",y);
//     return 0;
// }
// int prime(int n)
// {
//     int i;
//     for(i=2; i<=n-1;i++)
//         if(n%i==0)
//             return 0;
//     return 1;
// }

// 4.write a function to find the next prime nos. of a givens no.(tsrs).

#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to find the next prime number
int next_prime(int n) {
    n++;  // Start checking from the next number
    while (!is_prime(n)) {
        n++;
    }
    return n;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Next prime number: %d", next_prime(num));
    return 0;
}


// 5.write a function to print first first n prime nos(tsrn)

// 6. write a function  to print  all prime no. between two given nos(Tsrn)

// 7.write a function to print first n terms of fibonacci series(tsrn).

// 8.write a function to print PASCAL triangle(tsrn)

// 9. write a function to print all armstrong no. between two given nos(tsrn)

// 10.write a function to fin the sum of first n terms  of the series 1!/1+2!/2... n!/n(tsrs)



5. Print First N Prime Numbers


#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

void print_primes(int n) {
    int count = 0, num = 2;
    while (count < n) {
        if (is_prime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
}

int main() {
    int n;
    printf("Enter number of primes: ");
    scanf("%d", &n);
    print_primes(n);
    return 0;
}


6. Print Prime Numbers Between Two Numbers


#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

void print_primes(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (is_prime(i)) printf("%d ", i);
    }
}

int main() {
    int a, b;
    printf("Enter range (a b): ");
    scanf("%d %d", &a, &b);
    print_primes(a, b);
    return 0;
}


7. Print First N Terms of Fibonacci Series


#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1;
    printf("%d %d ", a, b);
    for (int i = 3; i <= n; i++) {
        int temp = a + b;
        printf("%d ", temp);
        a = b;
        b = temp;
    }
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}


8. Print Pascal's Triangle


#include <stdio.h>

void pascal_triangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) printf(" ");
        for (int k = 0; k <= i; k++) {
            int coefficient = 1;
            if (k > 0) coefficient = (i * coefficient) / k;
            printf("%d ", coefficient);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    pascal_triangle(n);
    return 0;
}


9. Print Armstrong Numbers Between Two Numbers


#include <stdio.h>

int is_armstrong(int num) {
    int temp = num, sum = 0;
    while (temp != 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    return sum == num;
}

void print_armstrong(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (is_armstrong(i)) printf("%d ", i);
    }
}

int main() {
    int a, b;
    printf("Enter range (a b): ");
    scanf("%d %d", &a, &b);
    print_armstrong(a, b);
    return 0;
}


10. Sum of Series 1!/1 + 2!/2 + ... + n!/n


#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

double sum_series(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (double)factorial(i) / i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Sum: %.2lf", sum_series(n));
    return 0;
}
