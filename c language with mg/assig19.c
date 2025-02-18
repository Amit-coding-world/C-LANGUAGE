// 1. write a function  to find the greatest no. from the given array of any size.(tsrs)
// #include"stdio.h"
// int greatest(int num[],int n);
// int main()
// {
//     int a[10],j;
    
//     j=greatest(a,10);
//     printf("\ngreatest number=%d",j);
//     return 0;
// }
// int greatest(int num[],int n)
// {
//     int i,max;
//     printf("enter %d number=",n);
//     for(i=0;i<=n;i++)
//         scanf("%d",&num[i]);
//     max=num[0];
//     for ( i = 1; i<=9; i++)
//     {
//         if (num[i]>max)
//         {
//             max=num[i];
//         }
        
//     }
    
//     return max;
    
    
// }


// 2. write a function to find the smallest no. from the given array of any size(tsrs)
// #include"stdio.h"
// int smallest( int b[],int n);
// int main()
// {
//     int a[10],x;
//     x=smallest(a,10);
//     printf("the smallest number=%d",x);
//     return 0;
// }
// int smallest( int b[],int n)
// {
//     int i,min;
//     printf("enter %d number=",n);
//     for(i=0;i<=n;i++)
//         scanf("%d",&b[i]);
//     min=b[0];
//     for(i=1;i<=9;i++)
//     {    if(b[i]<min)
//             min=b[i];}
//     return min;

// }
// 3. write a function to sort an array of any size(tsrn).
// #include"stdio.h"
// void sort( int num[],int x);
// int main()
// {
//     int a[10],z;
//     sort(a,10);
//     return 0;
// }
// void sort( int num[],int x)
// {
//     int i,r,t;
//     printf("enter %d number=", x);
//     for(i=0;i<=x;i++)
//         scanf("%d",&num[i]);
//     for(r=1;r<=x;r++)
//         for(i=0;i<=9;i++)
//         {
//             if(num[i]>num[i+1])
//             {
//                 t=num[i];
//                 num[i]=num[i+1];
//                 num[i+1]=t;
//             }
//         }
//     for(i=0;i<=x;i++)
//         printf("\t%d",num[i]);
// }

// 4. write a function to rotate an array by n position in d direction. the d is an indicative value for left or right(for ex if array of size 5 is
//  [32,29,40,12,70];n is 2 and d is left, then the resulting array after left rotation 2 times is [40,12,70,32,29]).

// #include<stdio.h>
// void rotate (int a[], int size, int n , int d);
// int main()
// {
//     int b[5];
//     rotate(b,5,2,1);
//     return 0;

// }
// void rotate (int a[], int size, int n , int d)
// {
//     int i, temp;
//     if(d==1)
//     {
//         while(n)
//         {
//             temp=a[size];
//             for (i=size-2;i<=0;i--)
//                 a[i+1]=a[i];
//             a[0]=temp;
//             n--;
//         }
//     }
//     else
//     {
//         while(n)
//         {
//             temp=a[0];
//             for (i=size-2;i<=0;i--)
//                 a[i-1]=a[i];
//             a[size-1]=temp;
//             n--;
//         }
//     }
    
    
    
// }

// 5. write a function to find the first occurrence of adjecent duplicate value in the array. function has to return the vale of the element.
// int adj(int a[],int size)
// {
//     int i;
//     for(i=0; i<=size-2;i++)
//     {
//         if(a[i]==a[i+1])
//             return a[i];
//     }
//     return ;
// }

// 6. write a function to swap two elements of given array with specified inices.


// void swap(int a[], int i1, int i2)
// {
//     int t;
//     t=a[i1];
//     a[i1]=a[i2];
//     a[i2]=t;
    
// }
// 7. write a function to count a total no. of duplicate elements in an array(means elements that occurs 2 times in an array).
int count_duplicate(int a[],int size)
{
    int i, j,count=0;
    sort(a,size);
    i=0;
    j=1;
    while(i<=size-2)
    {
        if(a[i]==a[j])
            count++ ;
        while(a[i]==a[j])
            j++;
        i=j;
        j=j+1;    
    }
}
// 8. write a function to print all unique elements in an array.
// 9. write a function to merge two arrays of same size sorted in descending order.
// 10. write a function to count the frequency of each element of en array.
