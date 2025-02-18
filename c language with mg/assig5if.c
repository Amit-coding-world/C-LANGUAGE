//decision control statement
#include<stdio.h>
//1.wap to check whether a given number is postive or non-positive.
// int main()
// {
//     int x;
//     printf("enter the number=");
//     scanf("%d",&x);
//     if(x>0)
//         printf("%d is postive ",x);
//     else
//         printf("%d is non-postive",x);
//     return 0;
// }

//2.wap to check whether a given number is divisible by 5 or not.

// int main()
// {
//     int x;
//     printf("enter a number=");
//     scanf("%d",&x);
//     if(x%5==0)
//         printf("%d is divisible by 5",x);
//     else
//         printf("%d is not divisible by 5",x);
//     return 0;
// }


//3.wap to check whether a given number is even or an odd number.

// int main()
// {
//     int x;
//     printf("enter the number=");
//     scanf("%d",&x);
//     if(x%2==0)
//         printf("%d is even no.",x);
//     else
//         printf("%d is odd no.",x);
//     return 0;
// }
//4. wap to check whether a given number is even or an odd number without using % operators.

/*int main()
{
    int x;
    printf("enter the number=");
    scanf("%d",&x);
    if(x/2*2==x)
        printf("no. is even");
    else
        printf("no. is odd");
}*/


//5. wap to check whether the given number is even or odd using bitwise operator.
// int main()
// {
//     int x;
//     printf("enter the number=");
//     scanf("%d",&x);
//     if(x&1==0)
//         printf("no. is even");
//     else
//         printf("no. is odd");
// }

//6. wap to check whether a given no.is a three digit number or not.
// int main()
// {
//     int x;
//     printf("enter the number=");
//     scanf("%d",&x);
//     if(x>=100 && x<=999)
//         printf("%d is three digit number",x);
//     else
//         printf("number is not three digit number");
//     return 0;
// }

//7.wap to print greater between two number. print one number if both are the same.
// int main()
// {  
    // int x,y;
//     printf("enter the number=");
//     scanf("%d,%d",&x,&y); 
//     if(x>=y)
//         printf("%d is greatest no. or equal to",x);
//     else 
//         printf("%d is smallest",y);
// }
// //8.wap to check whether roots of a given quadratic equation are real and distinct,real and equal or imaginary roots.
// int main()
// {
//     int a,b,c;
//     printf("enter the 3 number=");
//     scanf("%d,%d,%d",&a,&b,&c);
//     if(b*b-4*a*c>0)
//         printf(" real and distinct");
//     else if(b*b-4*a*c==0)
//         printf("real and equal root");
//     else if(b*b-4*a*c<0)
//         printf("imaginary roots");

//     return 0;
// }


//9.wap to check whether a given year is a leap year or not.
// int main()
// {
//     int year;
//     printf("enter the year=");
//     scanf("%d",&year);
//     if(year%100)//if result is 0  then it move to else part beacause non zero value is true, zero is false.
//     {//non-century year
//         if (year%4)//if result is 0  then it move to else part beacause non zero value is true, zero is false.
//         {
//           printf("not a leap  years"); 
//         }
//         else
//         {
//             printf("leap year");
//         }
        
//     }
//     else
//     {//century year
//         if (year%400)//if result is 0  then it move to else part beacause non zero value is true, zero is false.
//         {
//             printf("not a leap year");
//         }
//         else
//         {
//             printf("leap year");
//         }
        
//     }
    
// }


// or


// int main()
// {
//     int year;
//     printf("enter the year=");
//     scanf("%d",&year);
//     if((year%4==0&&year%100!=0)||(year%400==0))
//         printf("leap year");
//     else
//         printf("not a leap year");
// }

//10. wap to find the greatest among 3 given numbers. print number once if the greatest no. appears two or three times.
/*int main()
{
    int a,b,c;
    printf("enter 3 no.=");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a>b&& a>c)
        printf("%d is a greatest",a);
    else if(b>c)
        printf("%d is greatest no.",b);
    else 
        printf("%d is greatest no.",c);
    return 0;
}*/