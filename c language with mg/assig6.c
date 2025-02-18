//more on decixion  control statements

//1.wap to check whether a given number is a three digit number or not.
#include"stdio.h"
// int main()
// {   
//     int a;
//     printf("enter 3 digit number=");
//     scanf("%d",&a);
//     if (a>99 && a<1000)
//     {
//         printf("%d is 3 digit number",a);
//     }
//     else
//     {
//         printf("%d is not 3 digit number",a);
//     }
    
//     return 0;
// }


//2. wap which takes the cp and sp of a product from the user. Now calculate and print profit or loss percentage.

/*int main()
{
    float cp, sp;
    float profit, loss;
    printf("enter the cp and sp of a product=");
    scanf("%f,%f",&cp,&sp);
    profit=sp-cp;
    if (profit>=0)
    {
        printf("profit percentage=%f",profit/cp*100);
    }
    else
    {
       printf("loss percentage=%f",cp-sp/cp*100); 
    }
    

}*/

//3.wap to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. 
//Now display whether the candidate passed the examination or failed.

/*int main()
{
    int e, h, m, c, s;
    printf("enter the marks of 5 subject=");
    scanf("%d,%d,%d,%d,%d",&e,&h,&m,&c,&s);
    if(e>=33 && h>=33 && m>=33&& c>=33&&s>=33)
        printf("pass");
    else
    {
        printf("fail");
    }
    
}*/

//4. wap to check whether a given alphabet is in uppercase or lowercase.

/*int main()
{
    char ch;
 if (ch>='a' && ch<='z')
    {
        printf("lowercase");
    }
    else if(ch>='A' && ch<='Z')
        printf("uppercase");
    else
        printf("not an alphabet");
    
}*/

//5. wap to check whether a given number is divisible by 3 and divisible 2.

// int main()
// {
//     int x;
//     printf("enter the number =");
//     scanf("%d",&x);
//     if(x%2==0 && x%3==0)
//         printf("no. is divisible by 3 and 2");
//     else 
//         printf("not divisible by 2 and 3");
// }

//6. wap to chesk whether a given number is divisible by 7 or divisible by 3.
/*int main()
{
    int x;
    printf("enter the number =");
    scanf("%d",&x);
    if(x%7==0 && x%3==0)
        printf("no. is divisible by 3 or 7");
    else 
        printf("not divisible by 7 or 3");
}*/

//7.wap  to check whether a given no. is positive, negative or zero.
// int main()
// {

//     int x;
//     printf("enter the number =");
//     scanf("%d",&x);
//     if(x>0)
//         printf("postive no.");
//     else if (x<0)
//         printf("negative no");
//     else
//         printf("zero");
// }


//8.wap to check whether  a given character is an alphabet (uppercase),an alphabet(lowercase),a digit or a special character.

/*int main()
{
    char ch;
    if (ch>='a' && ch<='z')
    {
        printf("lowercase");
    }
    else if(ch>='A' && ch<='Z')
        printf("uppercase");
    else
        printf("special character");
    
}*/
//9.wap which take the length of the sides of a triangle as an input.Display whether the triangle is valid or not.
/*int main()
{
    int a, b, c;
    printf("enter the 3 side of triangle=");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
        printf("triangle is valid");
    else
        printf("triangle is invalid");
}*/

//10. wap which takes the month number as an input and disply no. of days in that month.
int main()
{
    int x;
    printf("enter the month no. between 1-12= ");
    scanf("%d",&x);
    if(x==1|| x==3||x==5 ||x==7||x==8||x==10 ||x==12 )
        printf("no of days is 31");
    else if (x==4||x==6||x==9||x==11)
        printf("no of days is 30");
    else
        printf("no of days is 28/29");
    
}