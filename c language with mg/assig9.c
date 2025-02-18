#include<stdio.h>
// 1. wap to calculate sum of first N natural number.
/*int main()
{
    int i,x,s=0;
    printf("enter the number=");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
        s=s+i;
    printf("sum =%d",s);
}*/

//2. wap to calculate sum of first N even natural number.
// int main()
// {
    // int a,b,c=0;
//     printf("enter the total no. of even no.=");
//     scanf("%d",&a);
//     for (b=1;b<=a;b++) \\for(b=2;b=2*a;b=b+2);\\c=c+b;
//     {
//         c=c+2*b;
//     }
//     printf("%d",c);
// }

// 3. wap to calculate sum of first n odd natural number.
// int main()
// {
//     int i,x,s;
//     printf("enter the total odd=");
//     scanf("%d",&x);
//     for(i=1,s=0;i<=2*x;i+=2)
//     s=s+i;
//     printf("sum of odd number=%d",s);
// }


//4.wap to calculate sum of square of first N natural number.

// int main()
// {
//     int x,k,y;
//     printf("enter the number=");
//     scanf("%d",&x);
//     for(k=1,y=0;k<=x;k++)
//         y=y+k*k;
//     printf("sum=%d",y);
// } 

//5.wap to calculate  sum of cube of first N natural number.
// int main()
// {
//     int x,k,y;
//     printf("enter the number=");
//     scanf("%d",&x);
//     for(k=1,y=0;k<=x;k++)
//         y=y+k*k*k;
//     printf("sum=%d",y);
// } 

//6. wap to calculate factorial of a number.
// int main()
// {
//     int x,i,f=1;
//     printf("enter the number=");
//     scanf("%d",&x);
//     for(i=1;i<=x;i++)
//        f=f*i;
//     printf("%d",f);
// }   


//7. wap to count digits in a given number.
// int main()
// {
//     int x,count;
//     printf("enter the number=");
//     scanf("%d",&x);
//     for(count=0;x;x/10,count++);
//     {   printf("digit=%d",count);}
//     return 0;


    // //count=0;
    // //while(x)
    // {
    //     x=x/10;
    //     count++;
    // }
    // printf("%d",count);

// }


// 8. wap to check whether a given  no. is a prime number or not.

/*int main()
{
    int i,x;
    printf("enter the number=");
    scanf("%d",&x);
    for (i=2;i<=x-1;i++)
    {
        if(x%i==0)
        break;
    }
    if(i==x)
        printf("prime no.");
    else
        printf("not prime no.");
    return 0;
}*/
//9. wap to calculate lcm of two nos.
int main()
{
    int l,a,b;
    printf("enter the two number=");
    scanf("%d,%d",&a,&b);
    for(l=a>b?a:b;l<=a*b;l++)
    if(l%a==0 && l%b==0)
    {
        printf("lcm is %d",l);
        break;
    }
}

//10. wap to reverse a given no.
// int main()
// {
//     int x,y=0;
//     printf("enter the a number=");
//     scanf("%d",&x);
//     while(x)
//     {
//         y=y*10+x%10;
//         x=x/10;
//     }
//     printf("%d",y);

// }