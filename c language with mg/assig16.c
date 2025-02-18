// 1.write a recursive function to print first n natural no.
// 2.write a recursive function to print first n natural no. in reverse order 
// 3.write a recursive function to print first n odd natural  number
// 4.write a recursive function to print first n odd natural number in reverse order 
// 5.write a recursive function to print  first n even natural number.
// 6.write a recursive function to print first n even natural number in reverse order .
// 7.write a recursive function to print square of first n natural no.
// 8.write a recursive function  to print binary of a given decimal numbers
// 9.write a recursive function  to print octal of a given decimal numbers
// 10.write a recursive function to print reverse of a given nos.

#include<stdio.h>
// void natural_first(int);
// void reverse_natural(int);
// void odd_natural(int);
// void odd_reverse(int);
// void even_natural(int);
// void even_reverse(int);
// void square(int);
// void b_to_d(int);
// void o_to_d(int);
// void reverse(int)
int main()
{
    int x;
    printf("enter the number=");
    scanf("%d",&x);
    // natural_first(x);
    // reverse_natural(x);
    // odd_natural(x);
    // odd_reverse(x);
    // even_natural(x);
    // even_reverse(x);
    // square(x);
    // b_to_d(x);
    // o_to_d(x);
    // reverse(x);
    printf("\n");
    return 0;
}
void natural_first(int n)
{   
    if(n>0)
    {
        natural_first(n-1);
        printf("\n %d",n);
    }
}
void reverse_natural(int y)
{
    if(y>0)
    {
        printf("\n%d",y);
        reverse_natural(y-1);
    }
}

void odd_natural(int n)
{
    if(n>0)
    {
        odd_natural(n-1);
        printf("\t%d",2*n-1);
    }
}
void odd_reverse(int n)
{
    if(n>0)
    {
        printf("\n%d",2*n-1);
        odd_reverse(n-1);
    }
}
void even_natural(int n)
{
    if(n>0)
    {
        even_natural(n-1);
        printf("\n%d",2*n);
    }
}
void even_reverse(int n)
{
    if(n>0)
    {
        printf("\n%d",2*n);
        even_reverse(n-1);
    }
}
void square(int n)
{
    if(n>0)
    {
        square(n-1);
        printf("%d\n",n*n);
    }
}
void b_to_d(int n)
{
    if(n>0)
    {
        b_to_d(n/2);
        printf("\n%d",n%2);
    }
}
void o_to_b(int n)
{
    if(n>0)
    {
        o_to_b(n/8);
        printf("\n %d",n%8);
    }
}
void reverse(int n)
{
    if(n>0)
    {
        printf("\n %d",n%10);
        reverse(n/10);
    }
}

