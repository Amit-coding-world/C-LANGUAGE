//OPERATOR IN C LANGUAGE


//1.wap to calculate size of a character constant.
#include<stdio.h>
// int main()
// {
//     char ch;
//     printf("ENTER THE CHARACTER=");
//     scanf("%d",&ch);
//     printf("Size of char =%d",sizeof(ch));
// }

//2.wap to calculate size of a real constant.

// int main()
// {
//    float x;
//    printf("enter the the real const=");
//    scanf("%f",&x);
//    printf("size of real constant=%d",sizeof(x));
//    return 0;
// }

//3.wap with one char. type variable.Assign 'A' in a variable.Now change the value of variable from 'A' to 'B' using increment operator.
// int main()
// {
//     char ch='A';
//     ch++;
//     printf("%c",ch);

// }   
                                  //or  

// int main()

// {  
//    int x;
//    char ch='A';
//    x=ch;
//    printf("%d",x);
//    printf("\nCH=%d",ch+1);
//    printf("\nCH=%c",ch+1);
//    return 0;
// }



//4.wap to print unit digit of a given number.

// int main()
// {
//     int x,y;
//     printf("enter the number=");
//     scanf("%d",&x);
//     y=x%10;
//     printf("%d is no. whose last digit=%d",x,y);
//     return 0;

// }


//5.wap to print a given no. without its last digit.

// int main()
// {
//     int x,y;
//     printf("enter the number=");
//     scanf("%d",&x);
//     y=x/10;
//     printf("given no is without last no.=%d",y);
// }


//6. wap to swap values of two int variables.
   // int main()
   // {
   //  int  a,b,c;
   //  printf(" enter the two no=");
   //  scanf("%d,%d",&a,&b);
   //  c=a;
   //  a=b;
   //  b=c;
   //  printf("a=%d,b=%d",a,b);
   // }

//7.wap to swap value of two int varibles without using a third varible.
// int main()
// {
//    int a,b;
//    printf("enter two number=");
//    scanf("%d,%d",&a,&b);
//    a=a+b;
//    b=a-b;
//    a=a-b;
//    printf("a=%d and b=%d",a,b);
// }

//8.wap to swap value of two int varibles without using third varible and without using +,- operators.

//int main()
// {
//    int a,b;
//    printf("enter two no.=");
//    scanf("%d,%d",&a,&b);
//    a=a*b;
//    b=a/b;
//    a=a/b;
//    printf("a=%d and b=%d",a,b);
// }
//9.wap to swap value of two int varibles without using third varible and arithmetics operators.
// int main()
// {
//    int a,b;
//    printf("enter two no.=");
//    scanf("%d,%d",&a,&b);
//    a=a^b;
//    b=a^b;
//    a=a^b;
//    printf("a=%d and b=%d",a,b);
// }
//10. wap to swap values of two int varible in single line arithmetics expression.

/*int main()
{
   int a,b;
   printf("enter two no.=");
   scanf("%d,%d",&a,&b);
   a=a+b-(b=a);
   printf(" swapping a=%d and b=%d",a,b);
}*/

 