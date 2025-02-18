// 1. write a program which takes the month no. as an input and display no. of days in that month.
#include<stdio.h>
// int main()
// {   
//     int month;
//     printf("enter the month no=");
//     scanf("%d",&month);
//     switch (month)
//     {
//     case 1:
//         printf("31 days in this month");
//         break;
//     case 3:
//         printf("31 days in this month");
//         break;
//     case 5:
//         printf("31 days in this month");
//         break;
//     case 7:
//         printf("31 days in this month");
//         break;
//     case 8:
//         printf("31 days in this month");
//         break;
//     case 12:
//         printf("31 days in this month");
//         break;
    
//     case 10:
//         printf("31 days in this month");
//         break;
//     case 4:
//         printf("30 days");
//         break;
//     case 6:
//         printf("30 days");
//         break;
//     case 9:
//         printf("30 days");
//         break;
//     case 11:
//         printf("30 days");
//         break;
//     case 2:
//         printf("28 or 29 days");
//         break;
//     default:
//         printf("invalid month number ");
//         break;
//     }
//     return 0;
// }

// 2. write a menu drive program with the following option- 1.addition 2. subtraction 3. multiplication 4. division 5. exit
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int choice,a,b;
//     while (1)
//  {
//     printf("\n1.additional");
//     printf("\n2.substraction");
//     printf("\n3. multiplication");
//     printf("\n4.division");
//     printf("\n5. for exit enter o");
//     printf("\nenter the  choice=");
//     scanf("%d",&choice);

//     switch (choice)
//     {
//     case 1:
//         printf("enter the two number=");
//         scanf("%d,%d",&a,&b);
//         printf("sum of two number=%d",a+b);
//         break;
//     case 2:
//         printf("enter two number=");
//         scanf("%d,%d",&a,&b);
//         printf("substraction=%d",b-a);
//     case 3:
//         printf("enter the two number=");
//         scanf("%d,%d",&a,&b);
//         printf("product=%d",a*b);
//     case 4:
//         printf("enter the two number=");
//         scanf("%d,%d",&a,&b);
//         printf("division=%f",b/a);
//     case 5:
//         exit(0);
//     default:
//         printf("\n invalid choice");
//         break;
//     }
    
//  }

//   return 0;  
// }

// 3.write which takes the day no. of a week and displays a unique greeting message for the day.
// #include"stdio.h"
// int main()
// {
//     int day;
//     printf("enter the days no.1-7=");
//     scanf("%d",&day);
//     switch(day)
//     {
//         case 1:
//             printf("sunday");
//             break;
//         case 2:
//             printf("monday");
//             break;
//         case 3:
//             printf("tuesday");
//             break;
//         case 4:
//             printf("wednesday");
//             break;
//         case 5:
//             printf("thursday");
//             break;
//         case 6:
//             printf("friday");
//             break;
//         case 7:
//             printf("saturday");
//             break;
//         default:
//             printf("invalid choice");
//             break;
//     }
//     return 0;
// }

// 4. write a menu drive program with the following optoins  
//             1.check whether a given set of three nos. are lengths of an isosceless triangle or not.
//             2. check whether a given set of three no. are lengths of sodes of a right angled triangle or not .
//             3.check wether a given set of 3 nos are equilateral triangle or not 
//             4.exit 

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int choice,a,b,c;
//     printf("\n 1.check isoscles triangle");
//     printf("\n2.check right angle triangle");
//     printf("\n3. check equilaterial triangle");
//     printf("\n4. to exit");
//     printf("\nenter your choice=");
//     scanf("%d",&choice);
//     switch(choice)
//     {
//         case 1:
//             printf("enter the lenght of side of a triangle=");
//             scanf("%d,%d,%d",&a,&b,&c);
//             if(a+b>c && b+c>a && a+c>b)
//             {
//                 if (a==b || a==c || b==c)
//                 {
//                     printf("\n it is as isosceles triangle.");
//                 }
//                 else
//                 {
//                     printf("\n it is not an isosceles triangle");
//                 }
                
//             }
//             else
//             {
//                 printf("\n not a valid triangle.");
                
//             }
//             break;

//             case 2: 
//                 printf("\n enter the side of a triangle=");
//                 scanf("%d,%d,%d",&a,&b,&c);
//                 if (a+b>c && b+c>a && a+c>b)
//                 {
//                     if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
//                     {
//                         printf( "\nit is a right angle triangle");
//                     }
//                     else
//                     {
//                         printf("it is not a right angle triangle");
//                     }
                    
//                 }
//                 else
//                 {
//                     printf("not a valid triangle");
//                 }
//                 break;

//             case 3:
//                 printf("enter the side of a triangle=");
//                 scanf("%d,%d,%d",&a,&b,&c);
//                 if (a+b>c && b+c>a && a+c>b)
//                 {
//                     if (a==b && a==c)
//                     {
//                         printf("it is an equilateral triangle ");
//                     }
//                     else
//                     {
//                         printf("it is not an equilateral triangle");
//                     }
                    
//                 }
//                 else
//                 {
//                     printf("it is a invalid side cannot formed triangle");
//                 }
//                 break;

//             case 4:
//                 exit(0);
//             default:
//                 printf("invalid choice, retry");


                
//     }
//     return 0;
// }





// 5.convert the following if- else -if construct into switch case:-
//                                                                 if (var==1)
//                                                                     printf("good");
//                                                                 else if(var==2)
//                                                                     printf("better");
//                                                                 else if (var==3)
//                                                                     printf("best");
//                                                                 else
//                                                                     printf("invalid");

// #include<stdio.h>
// int main()
// {
//     int var;
//     printf("enter your choice=");
//     scanf("%d",&var);
//     switch(var)
//     {
//         case 1:
//                 printf("good");
//                 break;
//         case 2:
//             printf("better");
//             break;
//         case 3:
//             printf("best");
//             break;
//         default:
//             printf("invalid");
//     }
//     return 0;
// }


// 6.program to find and display grade obtained by a students in a test. Grading specification are as follows:-
                                                        // marks from 90 to 100:grade A 
                                                        // marks from 80 to less than 80: grade B 
                                                        // marks from 70 to less than 80 : grade C 
                                                        // marks from 60 to less than 70 : grade D 
                                                        // marks below 50: grade F 
                                                        // marks grearer than100 or less than 0: invalid marks


// #include"stdio.h"
// int main()
// {
//     int x;
//     printf("enter your marks=");
//     scanf("%d",&x);
//     switch(x)
//     {
//         case 90 ... 100:
//             printf("\n grade A");
//             break;
//         case 80 ... 89:
//             printf("\n grade B");
//             break;
//         case 70 ... 79:
//             printf("\n grade C");
//             break;
//         case 60 ... 69:
//             printf("\n grade D");
//             break;
//         case 50  ... 59:
//             printf("\n grade E");
//             break;
//         case 0 ... 49:
//             printf("\n grade F");
//             break;
//         default:
//             printf("invalid marks");
//     }
//     return 0;
// }

// 7.write a menu drive program  with the following options:
//      1.factorial of a no.
//      2. check even and odd 
//      3.area of circle
//      4. sum of first n natural no.
//      5. exit

// #include"stdio.h"
// #include"stdlib.h"
// int main()
// {
//     printf("\n1.factorial of a no.");
//     printf("\n2. check even and odd"); 
//     printf("\n3.area of circle");
//     printf("\n4. sum of first n natural no.");
//     printf("\n5. exit");
//     int choice,a,fac,i;
//     printf("\n enter your choice=");
//     scanf("%d",&choice);
//     switch(choice)
//     {
//         case 1:
            
//             printf("enter the enter=");
//             scanf("%d",&a);
//             for(i=1,fac=1;i<=a;i++)
//             fac=fac*i;
//             printf("factorial=%d",fac);
//             break;

//         case 2:
            
//             printf("enter the number=");
//             scanf("%d",&a);
//             a%2?printf("odd"):printf("even");
//             break;

//         case 3:
//             printf("enter the radius=");
//             scanf("%d",&a);
//             printf("ar of circle=%f",3.14*a*a);
//             break;
//         case 4:
//             printf("enter the number=");
//             scanf("%d",&a);
//             for(i=1,fac=0;i<=a;i++)
//                 fac=fac+i;
//             printf("sum of first n number=%d",fac);
//             break;
//         case 5:
//             exit(0);
//             break;
//         default:
//             printf("in valid, retry");

//     }
// }

// 8. wap to check whether a given character is uppercase alphaber or lowercase alphabet  or some other special character using switch case statement. 

// #include<stdio.h>
// int main()
// {
//     char x;
//     printf("enter the character=");
//     scanf("%c",&x);
//     switch(x)
//     {
//         case 'a' ... 'z':
//             printf("lowercase alphabet");
                // break;
//         case 'A' ... 'Z':
//             printf("upper case alphabet");
            //    break;
//         default:
//             printf("special case");
            //    break; 
//     }
//     return 0;
// }


// 9. write to check whether  GIVEN character IS VOWEL OR Consonant or some other special character, using switch case statement.
// #include"stdio.h"
// int main()
// {
//     char ch;
//     printf("enter the character=");
//     scanf("%c",ch);
//     switch(ch)
//     {
//         case 'a': case 'e': case 'i': case 'o': case 'u': case 'A' : case 'E' : case 'I': case 'O': case 'U':
//             printf("vowel");
//             break;
//         case 'b' ... 'd': case 'f' ... 'h': case 'j' ... 'n': case 'p' ... 't': case'v' ...'z':case 'B' ... 'D': case 'F' ... 'H': case 'J' ... 'N': case 'P' ... 'T': case'V' ...'Z':
//             printf("consonant");
//             break;
//         default:
//             printf("other special character");
//             break;
//     }
//     return 0;
// }

// 10.write a menu driven program with the following options:-
//                         a. calculate lcm of two number
//                         b. calculate sum of the digits of a number
//                         c. vol of a cuboid
//                         d. check whether a given no. is prime or not.
//                         e.exit.
#include"stdio.h"
#include"stdlib.h"
int main()
{
    int a,b,i,choice;
    printf("\n 1.lcm of two number");
    printf("\n 2.sum of the digitof a number");
    printf("\n 3.vol of a cuboid");
    printf("\n 4.check prime or not");
    printf("\n 5.exit");
    printf("\n enter your choice=");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("enter two number=");
            scanf("%d,%d",&a,&b);
            for(i=a>b?a:b;i<=a*b;i++)
               {
                if(i%a==0 && i%b==0)
                {
                    printf("lcm is %d",i);
                    break;
                }
               }
            break;
        case 2:
            printf("enter the number=");
            scanf("%d",&a);
            b=0;
            while (a)
            {
                b=b+a%10;
                a=a/10;
            }
            printf("sum is %d",b);
            break;
        case 3:
            printf("enter the lenght of side=");
            scanf("%d,%d,%d",&a,&b,&i);
            printf("vol. of cuboid=%d",a*b*i);
            break;
        case 4:
            printf("enter the number=");
            scanf("%d",&a);
            for(i=2;i<a;i++)
            {
                if (a%i==0)
                break;
            }
            if(i==a)
                printf("%d is a prime number",a);
            else
                printf("%d is not a prime number",a);

            break;
        case 5:
            exit(0);
        default:
            printf("invalid choice,retry");

    }
}


