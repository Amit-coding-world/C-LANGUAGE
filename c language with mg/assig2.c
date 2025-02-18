//more on printf and scanf
#include<stdio.h>
// 1.wap to calculate average of three integers by take input by user.
// int main()
// {
//     int a,b,c,avg;
//     printf("enter three number=");
//     scanf("%d,%d,%d",&a,&b,&c);
//     avg=(a+b+c)/3;
//     printf("average=%d",avg);

// }

//2.wap to calculate circumference of a circle.
// int main()
// {
//     int r;
//     float cum;
//     printf("enter the radius of a circle=");
//     scanf("%d",&r);
//     cum=2*3.14*r;
//     printf("circumference=%f",cum);
//     return 0;
// }



//3.wap to calculate si.
// int main()
// {
//     int p,r,t;
//     float si;
//     printf("enter the p,r,t=");
//     scanf("%d,%d,%d",&p,&r,&t);
//     si=(p*r*t)/100;
//     printf("simple interest=%f",si);
// }


//4. wap to calculate vol.of cuboid.
// int main()
// {
//     int b,l,h;
//     printf("enter the b,l,h=");
//     scanf("%d,%d,%d",&b,&l,&h);
//     printf("vol. of cuboid=",b*h*l);

// }


//5.wap to ask user about the cp and sp banana per dozen. calculate the profit or loss  earned upon selling 25.
// int main()
// {
//     float cp,sp;
//     float profit;
//     printf("enter the cp,sp of 12 banana=");
//     scanf("%f,%f",&cp,&sp);
//     profit=(sp-cp)*25/12;

//     printf("profit=%f",profit);

// }


// //6. wap to input characters from the user and print its ASCII code.
// int main()
// {
//     char ch;
//     printf ("enter the ch=");
//     scanf("%c",&ch);
//     printf("ascii code of %c is %d",ch,ch);
// }


//7. wap to input ascii code from the user and print its character.
// int main()
// {
//     int x;
//     printf ("enter the ascii code =");
//     scanf("%d",&x);
//     printf("character of %d is %c",x,x);
// }

 

//8. wap to input 3 characters from the user and print its ASCII code.
// int main()
// {
//     char a,b,c;
//     printf ("enter the 3 ch=");
//     scanf("%c,%c,%c",&a,&b,&c);
//     printf("ascii code of %c is %d,%c is %d,%c is %d",a,a,b,b,c,c);
// } 



//9. WAP TO take date as an input in below given format and convert the date format and display the result as given below.
//user input date format- "DD/MM/YYYY", output format-"day-DD,month-MM,year-YYYY".
// int main()
// {
// int D,M,Y;
// printf("enter the date in DD/MM/YYYY=");
// scanf("%d/%d/%d",&D,&M,&Y);
// printf("day-%d,month-%d,year-%d",D,M,Y);
// return 0;
// }



//10.wap to take as an input in below given format and convert the time format and user input date format-"HH:MM",
//output format-"HH hour snd MM minutes"
int main()
{
int H,M;
printf("enter the time in HH:MM=");
scanf("%d:%d",&H,&M);
printf("%d hour and %d minutes",H,M);   
return 0;
}