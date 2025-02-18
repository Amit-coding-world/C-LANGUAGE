// more on operators in c language 
#include<stdio.h>
//1. wap to input a 3 digit no. and display the sum of the digits.
// int main()
// {
//    int a,x,y,z,b,s;
//    printf("enter three digit no.=");
//    scanf("%d",&a);
//    x=a%10;//unit digit
//    y=a/10;//first two digit
//    z=y%10;//middle digit
//    b=y/10;//first digit
//    //or
//    s=a%10+a/100+a/10%10;
//    printf("sum of the three digits no.=%d",x+b+z);
//    printf(" \nsum of the three digits no.=%d",s);
// }

//2. wap to find ASCII code of the character '+'.

// int main()
// {
//    char ch='+';
//    printf("ascii code of %c is %d ",ch,ch);
// }


//3. wap to print size of an int,a float, a char and a double type variable.

// int main()
// {
//    int a;
//    float b;
//    char c;
//    double d;
//    printf("SIZE of integer=%d",sizeof(a));
//    printf("\nSIZE of integer=%d",sizeof(b));
//    printf("\nSIZE of integer=%d",sizeof(c));
//    printf("\nSIZE of integer=%d",sizeof(d));

// }

//4. wap to make the last digit of a no. stored in a varibles a zero. ( example if x=2345 the make it x= 2340).
 
//  int main()
//  {
//   int x,y;
//    printf("enter the 4 digit number=");
//    scanf("%d",&x);
//    y=x/10*10;
//    printf("number will be=%d",y);
//    return 0;
//  } 


//5. wap to input a no. from the user and also input a digit. Append a digit in the no. and print the resulting no.
// (example number=234 and digit 9 the the resulting no. is 2349).
// int main()
// {
//    int a,b,c;
//    printf("enter the number, append no.=");
//    scanf("%d,%d",&a,&b);
//    c=a/10*10+b;
//    printf("resulting value=%d",c);
// }

//6. Assume price  of 1usd is inr 84.23 ,wap to take the amount in inr and convert its into usd.
// int main()
// {
//    float r;
//    printf("enter the amount in rupees=");
//    scanf("%f",&r);
//    printf("usd=%0.2f",r/84.23);
// }

//7. wp to take 3 digit no. from the user and rotate its digits by one position towards the right.

// int main()
// {
//       int a,b;
//       printf("enter three digit number=");
//       scanf("%d",&a);
//       b=a%10*100+a/10;
//       printf ("new no. after rotate one position=%d",b);
//       return 0;
// }


// what will be the value stored in the variable x after executing following statement.
//8.x=10>8>4;
// int main()
// {
//    int x=10>8>4;
//    printf("result=%d",x);

// }


//9.x=!2>-2;

// int main()
// {
//    int x=!2>-2;
//    printf("result=%d",x);
//    return 0;
// }/


// // //10.x=3<0 && 5>0;
int main()
{
   int x=3<0 && 5>0;
   printf("result=%d",x);
   return 0;
}