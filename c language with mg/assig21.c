// 1.wap to calculate the lenght of the string (without using built in method ).,
#include"stdio.h"
#include<string.h>
#include<stdlib.h>

// int main()
// {
//     char b[10];
//     int i;
//     printf("enter the character=");
//     fgets(b,10,stdin);
//     b[strlen(b)-1]='\0';
//     for(i=0;b[i];i++);
//         printf("length of enter character=%d",i);

// }
// 2.wap to count the occurrence of a given character in a given string.
// int main()
// {
//     char str[50],ch;
//     int i,count;
//     printf("enter the string=");
//     fgets(str,50,stdin);
//     str[strlen(str)-1]='\0';
//     fflush(stdin);
//     printf("enter the character=");
//     scanf("%c",&ch);
//     for(i=0,count=0; str[i];i++)
//         if(ch==str[i])
//             count++;
//     printf("count=%d",count);

// }

// 3.wap to count vowels in a given string.
// int main()
// {
//     char str[50],v[]="aeiouAEIOU";
//     int i,j,count;
//     printf("enter the string=");
//     fgets(str,50,stdin);
//     str[strlen(str)-1]='\0';
//     for(i=0,count=0;str[i];i++)
//         for(j=0;v[j];j++)
//             if(str[i]==v[j])
//                 {
//                     count++;
//                     break;
//                 }
//     printf("vowels in this string=%d",count);
// }

// 4.wap to count spaces in a given string.
// int main()
// {
//     char str[50];
//     int i,count;
//     printf("enter the string=");
//     fgets(str,50,stdin);
//     str[strlen(str)-1]='\0';
//     for(i=0,count=0;str[i];i++)
//         if(str[i]==' ')
//             count++;
//     printf("count=%d",count);

// } 

// 5.wap to convert a given string into uppercase.
// int main()
// {
//     char str[50];
//     int i;
//     printf("enter the string=");
//     fgets(str,50,stdin);
//     str[strlen(str)-1]='\0';
//     for(i=0;str[i];i++)
//         if(str[i]>='a'&& str[i]<='z')
//             str[i]=str[i]-32;
//     printf("uppercase of string=%s",str);
// }

// 6.wap to convert a given string into lowercase.
// int main()
// {
//     char str[50];
//     int i;
//     printf("enter the string=");
//     fgets(str,50,stdin);
//     str[strlen(str)-1]='\0';
//     for(i=0;str[i];i++)
//         if(str[i]>='A'&& str[i]<='Z')
//             str[i]=str[i]+32;
//     printf("lowercase of string=%s",str);
// }
// 7.wap to reverse a string .


// 8.wap in c to count the total no.of alphabets ,digit and special characters in a string.
// int main()
// {
//     char str[50],ch;
//     int i,alpha_count=0, digit_count=0,other_count=0;
//     printf("enter the string=");
//     fgets(str,50,stdin);
//     str[strlen(str)-1]='\0';
//     for(i=0;str[i];i++)
//         switch(str[i])
//         {
//             case 'a'... 'z':case 'A' ... 'Z':
//                 alpha_count++;
//                 break;
//             case '0' ... '9':
//                 digit_count++;
//                 break;
//             default:
//                 other_count++;
//                 break;
//         }
//     printf("alphabet=%d\n",alpha_count);
//     printf("digit=%d\n",digit_count);
//     printf("special character=%d\n",other_count);
//     return 0;
// }
    

// 9.wap in c to copy one string to another char array.
// int main()
// {
//     char str[50],s[50];
//     int i;
//     printf("enter the string=");
//     fgets(str,50,stdin);
//     str[strlen(str)-1]='\0';
//     for(i=0;str[i];i++)
//         s[i]=str[i];
//     s[i]='\0';
//     printf(" copy=%s",s);
        
// }

// 10.wap to first first occurrence of a given character in a given string.

int main()
{
    char str[50],ch;
    int i;
    printf("enter the string=");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    fflush(stdin);
    printf("enter the character=");
    scanf("%c",&ch);
    for(i=0; str[i];i++)
    if(str[i]==ch)
         printf("%c is found in %s at %d index\n",ch,str,i);
    else
        printf("%c not found in %s at %d index\n",ch,str,i);
    
    return 0;        
    
}
