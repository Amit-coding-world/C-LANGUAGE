//  more on iterative control statement
#include<stdio.h>
// int main()
// {
//     int i;
//     for(i=1; ;i++) //infinity loop
//         printf("hello my friend \n");
//     return 0;
// }
//1.wap to print mysirg n times on the screen.
/*int main()
{
    int x,n;
    printf(" enter the no. of times want to print= ");
    scanf("%d",&n);
    for (x=0;x<n;x++)
    {
       printf("my sirg \n");
    }
    return 0;
}*/
//2. wap to print the first n natural number.
// int main()
// {
//     int i,n;
//     printf("enter the no.=");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//         printf("%d \n",i);
        
//     return 0;
// }

//3.wap to print the first n natural number in reverse order.
 
 /*int main()
 {
    int x,b;
    printf("enter the last digit=");
    scanf("%d",&x);
    for(b=x;b>=1;b--)
        printf("%d\n",b);
 }*/

// 4. wap to print the first n odd natural no.
/*int main()
{
    int a,c;
    printf("enter the total no. odd=");
    scanf("%d",&a);
    for(c=0;c<=a;c++)
    printf("%d\n",2*c+1);
}*/

// 5. wap to print the first n odd natural no. in reverse order.
/*int main()
{
    int y,z;
    printf("enter the total no. odd number=");
    scanf("%d",&y);
    for(z=y;z>=1;z--)
        printf("%d \n",2*z-1);
}*/

//6.wap to print the first n even natural no.
/*int main()
{
 int x,y;
 printf("enter the total no of even=");
 scanf("%d",&y);
 for (x=1;x<=y;x++)
    printf("%d\n",2*x);
}*/

//7.wap to print the first n even natural no. in reverse order.
/*int main()
{
    int i,x;
    printf("enter the total no of even=");
    scanf("%d",&x);
    for(i=x;i>=1;i--)
    printf("%d \n",2*i);
}*/

//8.wap to print the square of the first n natural no.
/*int main()
{
    int x,i;
    printf("enter the last no.=");
    scanf("%d",&x);
    for (i=1; i<=x; i++)
    {
        printf("%d \n",i*i);
    }
    
}*/
//9.wap to print the cube of the first n natural no.
// int main()
// {
//     int x,i;
//     printf("enter the last no.=");
//     scanf("%d",&x);
//     for (i=1; i<=x; i++)
//     {
//         printf("%d \n",i*i*i);
//     }
    
// }

//10.wap to print a table of n.
int main()
{
    int x,i;
    printf("enter the no.=");
    scanf("%d",&x);
    for (i=1; i<=10; i++)
    {
        printf("%d \n",x*i);
    }
    
}