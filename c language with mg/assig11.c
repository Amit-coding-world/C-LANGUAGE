// /*   *
//      **
//      ***
//      ****
//      *****


#include"stdio.h"
// int main()
// {
//     int i,j;
//     for (i=1;i<=5;i++)
//     {
//         for (j=1;j<=5;j++)
//         {
//             if(j<=i)
//                 printf("*");
//             else
//                 printf(" ");
            
//         }
//         printf("\n");
        
//     }
//     return 0;
// }

//      *
//     **
//    ***
//   ****
//  *****
// int main()
// {
//     int i,j;
//     for (i=1;i<=5 ;i++)
//     {
//         for (j=1;j<=5;j++)
//         {
//             if (j>=6-i)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
            
//         }
//         printf("\n");
//     }
//     return 0;
    
// }



//  *****
//  ****
//  ***
//  **
//  *
// int main()
// {
//     int i,j;
//     for (i = 1; i<=5; i++)
//     {
//         for (j=1;j<=5 ; j++)
//         {
//             if (j<=6-i)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
            
            
//         }
//         printf("\n");

//     }
    
// }


// *****
//  ****
//   ***
//    **
//     *

// int main()
// {
//     int i,j;
//     for (i = 1; i<=5; i++)
//     {
//         for (j=1;j<=5;j++)
//         {
//             if (j>=i)
//             {
//                printf("*"); 
//             }
//             else
//             {
//                printf(" "); 
//             }
            
//         }
//         printf("\n");
//     }
    
// }

// 1
// 12
// 123
// 1234
// 12345

// int main()
// {
//     int i,j;
//     for (i=1; i<=5; i++)
//     {
//         for (j=1;j<=5; j++)
//         {
//             if (j<=i)
//             {
//                 printf("%d",j);
//             }
//             else
//             {
//                 printf(" ");
//             }
            
//         }
//         printf("\n");
//     }
    
// }

// 1
// 21
// 321
// 4321

// int main()
// {
//     int i,j,k;
//     for ( i=1; i<=4; i++)
//     {
//         k=i;
//         for ( j=1; j<=4; j++)
//         {
//             if (j<=i)
//             {
//               printf("%d",k);
//               k--;  
//             }
//             else
//             {
//                 printf(" ");
//             }
            
//         }
//         printf("\n");
//     }
    
// }

// ABCDE
//  ABCD
//   ABC
//    AB
//     A
// int main()
// {
//     int i,j;
//     char k;
//     for ( i = 1; i <= 5; i++)
//     {
//         k='A';
//         for ( j =1; j<=5;j++)
//         {
//             if (j>=i)
//             {
//                printf("%c",k);
//                k++; 
//             }
//             else
//             {
//                 printf(" ");
//             }
            
//         }
//         printf("\n");
//     }
    
// }

// 1
// 23
// 456
// 78910


// int main()
// {
//     int i,j,k=1;
//     for ( i=1; i<=4; i++)
//     {
        
//         for ( j=1; j<=4; j++)
//         {
//             if (j<=i)
//             {
//               printf("%d",k);
//               k++;  
//             }
//             else
//             {
//                 printf(" ");
//              }
            
//         }
//         printf("\n");
//     }
    
// }


// ABCDE
//  BCDE
//   CDE
//    DE
//     E

// int main()
// {
//     int i,j;
//     for ( i=1; i<=5; i++)
//     {
    
//         for ( j=1; j<=5; j++)
//         {
//             if (j>=i)
//             {
//               printf("%c",64+j);
              
//             }
//             else
//             {
//                 printf(" ");
//             }
            
//         }
//         printf("\n");
//     }
    
// }


// *****
// *   *
// *   *
// *   *
// ***** 

int main()
{
    int i,j;
    for ( i=1; i<=5; i++)
    {
        
        for ( j=1; j<=5; j++)
        {
            if (i==1||i==5||j==1||j==5)
            {
              printf("*");
                
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0;
}
