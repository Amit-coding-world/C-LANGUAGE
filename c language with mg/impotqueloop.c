#include<stdio.h>
// int main()
// {
//     int i=1;
//     for(i;;)
//     printf("cimage");
// }


// #include<stdio.h>
// int main()
// {
//     int a=5,b;
//     b=++a + a++ + ++a;
//     printf("%d",b);
//     return 0;
// }

// int main()
// {
//     int a=1,b;
//     b=++a + ++a;
//     printf("%d %d",a,b);
//     return 0;
// }



// int main()
// {
//     int i ,x,s=0;
//     printf("enter no (last no. should be 0)");
//     while (1)
//     {
//         scanf("%d",&x);
//         if(x==0)
//             break;
//         s=s+x;
//     }
//     printf("sum is %d",s);
//     return 0;
// }




// int main()
// {
//     int i,x,s=0;
//     printf("enter the number (last digit is 0 for break the )=");
//     while(1)
//     {
//         scanf("%d",&x);
//         if(x==0)
//             break;
//         s=s+x;
//     }
//     printf("sum=%d",s);
//     return 0;
// }


int main()
{
    int s=0;
    char ch;
    do{
        int num;
        printf("enter a number ");
        scanf("%d",&num);
        printf ("sum=%d",s=s+num);
        printf("add another no.? (y/n)");
        scanf("%c,&ch");
    }
    while(ch=='y'|| ch=='Y' );
        printf("final sum=%d",s);
    return 0;

}























