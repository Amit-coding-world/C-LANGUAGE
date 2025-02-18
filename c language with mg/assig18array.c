// 1. write a program to calculate the sum of number stored in any array of size 10. take array value from the user.

// #include"stdio.h"
// int main()
// {
//     int num[10],i,sum=0;
//     printf("enter the 10 digit number=");
//     for(i=0;i<=9;i++)
//         scanf("%d",&num[i]);
//     for(i=0;i<=9;i++)
//         sum=sum+num[i];
//     printf("sum=%d",sum);
//     return 0;

// }
// 2. wap to calculate the average of number stored in an array of size 10 .take array values from the user.
// #include<stdio.h>
// int main()
// {
//     int num[10],sum,i;
//     float avg;
//     printf("enter the 10 number=");
//     for(i=0;i<=9;i++)
//         scanf("%d",&num[i]);
//     for(i=0;i<=9;i++)
//         sum=sum+num[i];
//     avg=sum/10.0;
//     printf("avg=%f",avg);
//     return 0;
// }

// 3. wap to calculate the sum of all even nos. and sum of all odd nos. which are stored in an array of size 10.take array values from the user.

// #include<stdio.h>
// int main()
// {
//     int num1[10],sum_even=0,sum_odd=0,i;
//     printf("enter the  number=");
//     for (i = 0; i <= 9; i++)
//     {
//         scanf("%d",&num1[i]);
    
//     }
//     for ( i = 0; i <=9; i++)
//     {
//         if(num1[i]%2==0)
//             sum_even=sum_even+num1[i];
//         else
//             sum_odd=sum_odd+num1[i];

//     }
    
//     printf("sum of even=%d",sum_even);
//     printf("\nsum of odd=%d",sum_odd);
//     return 0;
    
    
// }

// 4. wap to find the greatest no. stored in an array of size 10.take array value from the user.
// #include<stdio.h>
// int main()
// {
//     int num[10],max,i;
//     printf("enter the number=");
//     for(i=0;i<=9;i++)
//         scanf("%d",&num[i]);
//     max=num[0];
//     for(i=0;i<=9;i++)
//     {
//         if(num[i]>max)
//             max=num[i];
//     }
//     printf("\n greatest no=%d",max);
//     return 0;
    
// }

// 5.wap to find the smallest no. stored in an array of size 10.take array value from the user.
// #include"stdio.h"
// int main()
// {
//     int num[10],i,min;
//     printf("enter the 10 number=");
//     for(i=0;i<=9;i++)
//         scanf("%d",&num[i]);
//     min=num[0];
//     for ( i = 0; i<= 9; i++)
//     {
//         if(num[i]<min)
//             min=num[i];
//     }
//     printf("smallest number=%d",min);
//     return 0;
// }

// 6. wap to sort elements of an array of size 10. take array value from the user.
// #include<stdio.h>
// int main()
// {
//     int num[10],i,r,t;
//     printf("enter the 10 number=");
//     for(i=0;i<=9;i++)
//         scanf("%d",&num[i]);
//     for(r=1;r<=9;r++)
//         for(i=0;i<=9;i++)
//         {
//             if(num[i]>num[i+1])
//             {
//                 t=num[i];
//                 num[i]=num[i+1];
//                 num[i+1]=t;
//             }
//         }
//     for(i=0;i<=9;i++)
//         printf("\t%d",num[i]);
//     return 0;
// }


// 7. wap to find second largest number in an array  . take array values from the user.
// #include"stdio.h"
// int main()
// {
//     int i, a[10],max,second_max;
//     printf("enter 10 number=");
//     for(i=0;i<=9;i++)
//         scanf("%d",&a[i]);
//     if(a[0]>a[1])
//     {
//         max=a[0];
//         second_max=a[1];
//     }
//     else
//     {
//         max=a[1];
//         second_max=a[0];
//     }
//     for (i=2;i<=9;i++)
//     {
//         if(a[i]>max)
//         {
//             second_max=max;
//             max=a[i];
//         }
//         else
//         {
//             if(a[i]>second_max)
//                 second_max=a[i];
//         }
//     }
//     printf("\n second largest number=%d",second_max);
//     return 0;
// }

// 8. wap to find second smallest number in an array  . take array values from the user.
#include"stdio.h"
int main()
{
    int min, second_min,a[10],i;
    printf("enter the 10 number=");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    if(a[0]<a[1])
    {
        second_min=a[1];
        min=a[0];
    }
    else
    {
        second_min=a[0];
        min=a[1];
    }
    for(i=2;i<=9;i++)
    {
        if(a[i]<min)
        {
            second_min=min;
            min=a[i];
        }
        else
        {
            if(a[i]<second_min)
                second_min=a[i];
        }
    }
    printf("\nsecond largest no is %d",second_min);
    return 0;
}

// 9. wap to sort an array of 10 element in descending order.

// #include<stdio.h>
// int main()
// {
//     int num[10],i,r,t;
//     printf("enter the 10 number=");
//     for(i=0;i<=9;i++)
//         scanf("%d",&num[i]);
//     for(r=1;r<=;r++)
//         for(i=0;i<=9;i++)
//         {
//             if(num[i]<num[i+1])
//             {
//                 t=num[i];
//                 num[i]=num[i+1];
//                 num[i+1]=t;
//             }
//         }
//     for(i=0;i<=9;i++)
//         printf("\t%d",num[i]);
//     return 0;
// }

// 10. wap in c to copy the elements of one array into another array. take array values from the user.
// #include"stdio.h"
// int main()
// {
//     int i, a[10],b[10];
//     printf("enter 10 number=");
//     for(i=0;i<=9;i++)
//         scanf("%d",&a[i]);
//     for(i=0;i<=9;i++)
//         b[i]=a[i];
//     for(i=0;i<=9;i++)
//         printf("%d\t",b[i]);
//     return 0;

// }