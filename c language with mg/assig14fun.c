// 1.write a function to calculate the area of a circle (TSRS).
// #include<stdio.h>
// int area(int);
// int main()
// {
//     int y=2,z;
//     z=area(y);  
//     printf("area of circle=%d",z);
//     return 0;
// }
// int area(int x)
// {   
//     int c;
//     c=3.14*x*x;
//     return c;
// }
// 2. WRITE A FUNCTION TO CALCULTE THE SI(TSRS)

// #include"stdio.h"
// int si(int,int ,int);
// int main()
// {
     
//     int x, p=5,r=10,t=100;
//     x=si(p,r,t);
//     printf("si=%d",x);
//     return 0;
// }
// int si(int a,int b,int c)
// {
//     int simple;
//     simple=(a*b*c)/100;
//     return simple;

// }

// 3. write a function to check whether a given  no. is even or odd. return 1 if the number is even , otherwise return 0(TSRS)

// #include"stdio.h"
// int check(int);
// int main()
// {
//     int i,y;
//     printf("enter the number=");
//     scanf("%d",&y);
//     i=check(y);
//     printf("%d",i);
//     return 0;
// }
// int check(int x)
// {
//     return x%2?0:1;
// }

// 4. write a function to print first n natural nos(TSRn)
// #include"stdio.h"
// void natural(int);
// int main()
// {
//     int x;
//     printf("enter the number=");
//     scanf("%d",&x);
//     natural(x);
//     return 0;
// }
// void natural(int n)
// {
//     int i;
//     for(i=1;i<=n;i++)
//         printf("%d\n",i);
    


// }

// 5.write a function to print first N odd natural nos(TSRn)
// #include"stdio.h"
// void odd(int);
// int main()
// {  
//     int x=100;//100 odd number
//     odd(x);
//     return 0;
// }
// void odd(int n)
// {
//     int i;
//     for(i=1;i<=n;i++)
//         printf("%d\n",2*i-1);
// }

// 6. write a function to  calculate the factorial of a nos(TSrS) 
// #include<stdio.h>
// int factorial(int);
// int main()
// {   
//     int x=5,b;
//     b=factorial(x);
//     printf("%d",b);
//     return 0;
// }
// int factorial(int n)
// {
//     int i,fac=1;
//     for(i=1;i<=n;i++)
//         fac=fac*i;
//     return fac;
// }


// 7. write a function to calculate no. of combinations one can make from n items and r selected at a time.(TSRS)

// 8. write a function to calculate the no. of arrangment one can make n items and r selecter at a time.(tsrs)
// 9.write a function to check whether a given no. contains given digit or not(TSRS).
// #include"stdio.h"
// int digits(int,int);
// int main()
// {
//     int n,i;
//     printf("enter the number=");
//     scanf("%d",&n);
//     i=digits(n,2);
//     if(i)
//         printf("yes %d contains 2",n);
//     else
//         printf("no, %d doesn't contain 2",n);
//     printf("\n");
//     return 0;
    
// }
// int digits(int num, int digit)
// {
//     while (1)
//     {
//         if(num %10==digit)
//             return 1;
//         num=num/10;
//     }
//     return 0;
    
// }


// 10.write a function to print all prime factors of a given no. for example if the nos is 36 then your result should be 2,2,3,3(TSRn). 
// #include"stdio.h"
// void primef(int);
// int main()
// {   
//     int x;
//     printf("enter the number=");
//     scanf("%d",&x);
//     primef(x);
//     printf("\n");
//     return 0;
    
// }
// void primef(int num)
// {
//     int i=2;
//     while(num > 1)
//     {
//         while(num%i==0)
//         {
//             printf("%d",i);
//             num=num/i;
//         }
//         i++;
//     }
    
// }






















