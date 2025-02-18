//    *
//   ***
//  *****
// *******
#include <stdio.h>
// int main()
// {
//  int i,j;
//  for ( i=1;i<=4; i++)
//  {
//    for (j=1;j<=7;j++)
//    {
//       if(j>=5-i && j<=3+i)
//       {
//          printf("*");
//       }
//       else
//       {
//          printf(" ");
//       }
      
//    }
//    printf("\n");
//  }
 
// }


// *******
//  *****
//   *** 
//    *
// #include <stdio.h>
// int main()
// {
//  int i,j;
//  for ( i=1;i<=4; i++)
//  {
//    for (j=1;j<=7;j++)
//    {
//       if(j>=i && j<=8-i)
//       {
//          printf("*");
//       }
//       else
//       {
//          printf(" ");
//       }
      
//    }
//    printf("\n");
//  }
 
// }

   
//      *
//     * *
//    * * *
//   * * * *
// #include <stdio.h>
// int main()
// {
//  int i,j,k;
//  for ( i=1;i<=4; i++)
//  {
//    k=1;
//    for (j=1;j<=7;j++)
//    {
//       if(j>=5-i && j<=3+i)
//       {
//          if(k)
//             printf("*");
//          else
//             printf(" ");
//          k=1-k;
//       }
//       else
//       {
//          printf(" ");
//       }
      
//    }
//    printf("\n");
//  }
 
// }


//    1
//   121
//  12321
// 1234321

// #include <stdio.h>
// int main()
// {
//  int i,j ,k;
//  for ( i=1;i<=4; i++)
//  {
//    k=1;
//    for (j=1;j<=7;j++)
//    {
//       if(j>=5-i && j<=3+i)
//       {
//          printf("%d",k);
//          j<4?k++:k--;
//       }
//       else
//       {
//          printf(" ");
//       }
      
//    }
//    printf("\n");
//  }
 
// }


// ABCDEFG
//  ABCDE
//   ABC 
//    A
// #include <stdio.h>
// int main()
// {
//  int i,j,k;
//  for ( i=1;i<=4; i++)
//  {
//    k='A';
//    for (j=1;j<=7;j++)
//    {
//       if(j>=i && j<=8-i)
//       {
//          printf("%c",k);
//          k++;
//       }
//       else
//       {
//          printf(" ");
//       }
      
//    }
//    printf("\n");
//  }
 
// }

// ABCDCBA
//  ABCBA
//   ABA
//    A 
// #include <stdio.h>
// int main()
// {
//  int i,j,k;
//  for ( i=1;i<=4; i++)
//  {
//    k='A';
//    for (j=1;j<=7;j++)
//    {
//       if(j>=i && j<=8-i)
//       {
//          printf("%c",k);
//          j<4?k++:k--;
//       }
//       else
//       {
//          printf(" ");
//       }
      
//    }
//    printf("\n");
//  }
 
// }

//    1
//   1 1
//  1 2 1
// 1 2 2 1
// 1 2 3 2 1

// #include <stdio.h>
// int main()
// {
//  int i,j,k,x;
//  for ( i=1;i<=5; i++)
//  {
//    k=1;
//    x=1;
//    for (j=1;j<=9;j++)
//    {
//       if(j>=6-i && j<=4+i)
//       {
//          if(k)
//          {
//             printf("%d",x);
//             j<5?x++:x--;
//          }
//          else
//          {
//             printf(" ");
//             if(j==5)
//                x--;
//          }
//          k=1-k;
//       }
   
//    }
//     printf("\n");
 
//  }

// }


// *******
// *** ***
// **   **
// *     *
// #include <stdio.h>
// int main()
// {
//  int i,j;
//  for ( i=1;i<=4; i++)
//  {
//    for (j=1;j<=7;j++)
//    {
//       if(j<=5-i || j>=3+i)
//       {
//          printf("*");
//       }
//       else
//       {
//          printf(" ");
//       }
      
//    }
//    printf("\n");
//  }
 
// }


// 1234321
// 123 321
// 12   21
// 1     1

// #include <stdio.h>
// int main()
// {
//  int i,j,k;
//  for ( i=1;i<=4; i++)
//  {
//    k=1;
//    for (j=1;j<=7;j++)
//    {
//       if(j<=5-i || j>=3+i)
//       {
//          printf("%d",k);
//          k++;
//       }
//       else
//       {
//          printf(" ");
//       }
      
//    }
//    printf("\n");
//  }
 
// }

// ABCDCBA
// ABC CBA 
// AB   BA
// A     A
#include <stdio.h>
int main()
{
 int i,j,k;
 for ( i=1;i<=4; i++)
 {
   k='A';
   for (j=1;j<=7;j++)
   {
      if(j<=5-i || j>=3+i)
      {
         printf("%c",k);
         k++;
      }
      else
      {
         printf(" ");
      }
      
   }
   printf("\n");
 }
 
}