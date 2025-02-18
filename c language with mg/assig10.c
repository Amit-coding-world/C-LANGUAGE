// level up with loops 

#include<stdio.h>
//1. wap to find the nth term(last terms) of the fibonacci series .
// int main()
// {
//     int x,i,c,a=-1,b=1;
//     printf("enter the number=");
//     scanf("%d",&x);
//     for(i=0;i<=x;i++)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//     }
//     printf("%d",c);

// }

// 2.wap to print first  n term of fibonacci series.(to show the first to last term)

// int main()
// {
//     int n,a=-1,b=1,c,i;
//     printf("enter a number=");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++)
//     {
//         c=a+b;
//         printf("%d\n",c);
//         a=b;
//         b=c;
//     }
// }

//3. wap to check wether a given no. is  there in the fibonacci series or not.

// int main()
// {
//     int x,a=-1,b=1,i,c;
//     printf("enter the number which we want check=");
//     scanf("%d",&x);
//     for(i=0;i<=x;i++)
//     {
//         c=a+b;
//         if(c==x)
//         {
//             printf("%d is %d term in the series",x,i);
//             break;
//         }
        
//         if(c>x)
//         {
//             printf("%d is not in the series",x);
//             break;
//         }   
        
//         a=b;
//         b=c;

//     }
// }

// 4. wap to calculate hcf of two nos.

// int main()
// {
//     int l,a,b,i;
//     printf("enter two number=");
//     scanf("%d,%d",&a,&b);
//     for(l=a>b?a:b;l>=1;l--)
//     {
//         if(l%a==0 && l%b==0)
//             break;
//     }
//     printf("hcf is %d",l);
// }
//5. wap to check whether two given nos are co-prime or not.

// int main()
// {
//    int l,a,b,i;
//    printf("enter two number=");
//    scanf("%d,%d",&a,&b);
//    for(l=a>b?a:b;l>=1;l--)
//    {
//     if(l%a==0 && l%b==0)
//         break;
//    } 
//    printf("%d\n",l);
//    if(l==1)
//     printf("co-prime no.");
//    else
//     printf("not co-prime no."); 
// }


// 6. wap to print all prime number  under 100.
// int main()
// {
//     int i,x,a=2,b=100;
//     for(x=a;x<=b;x++)
//     {
//         for(i=2;i<x;i++)
//         {
//             if(x%i==0)
//                 break;
//         }
//         if(i==x)
//             printf("%d",x);
//     }

// }




//7. wap to print all prime number between two given no.
// int main()
// {
//     int x,i,a,b;
//     printf("enter two number=");
//     scanf("%d,%d",&a,&b);
//     for(x=a;x<=b;x++)
//     {
//         for(i=2;i<=x;i++)
//         if( x%i==0) 
//             break;
    
//         if (i==x)
//             printf("%d\n",x);
//     }
    
// }



//8. wap  to find next prime number of a given number.
// int main()
// {
//     int n,x,i;
//     printf("enter the number=");
//     scanf("%d",&n);
//     for(x=n+1; ;x++)
//     {
//         for(i=2;i<=x;i++)
//             if(x%i==0)
//                 break;


//         if(i==x)
//         {
//             printf("next prime numberis %d\n",x);
//                 break;
//         }
//     }
// }



//9. wap to check whether a given no. is armstrong no. or not.
int main()
{
    int x,y,n=0,sum=0,d,p,i;
    printf("enter the number=");
    scanf("%d",&x);
        y=x;
    while (y)
    {
        y=y/10;
        n++;
    }
    for(y=x;y;y=y/10)
    {
        d=y%10;
        for ( p=1,i=1;i<=x;i++)
            p=p*d;
        sum=sum+p;
    }
    if (sum==x)
    {
        printf("%d is armstrong no.",x);
    }
    else
        printf("%d is not armstrong no.",x);
}

// 10. wap to print all armstrong number under 1000. 
int main()
{
    int x,y,n=0,sum=0,d,p,i;
    printf("enter the number=");
    scanf("%d",&x);
        y=x;
        n=0;
    while (y)
    {
        y=y/10;
        n++;
    }
    for(y=x;y;y=y/10)
    {
        d=y%10;
        for (p=1,i=1;i<=x;i++)
            p=p*d;
        sum=sum+p;
    }
    if (sum==x)
    {
        printf("%d",x);
    }
    
}