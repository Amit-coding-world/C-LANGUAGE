#include"stdio.h"
#include"string.h"
void f1();

void f3();
void f4();
void f5();
void f6();
int is_alphanumeric(char str[]);
char* reverse(char str[]);
int find(char str[],char ch);
// 1.write a function to calculate length of a string .
int main()
{
    // f1();
    
    // f3();
    // f4();
    // f5();
    // f6();
    // printf("%d",is_alphanumeric("amit138"));
    // printf("%s",reverse("amit kumar"));
    printf("%s",find("amit","mi"));

    return 0;
}
void f1()
   { char a[50];
    int i;
    printf("enter the string=");
    fgets(a,50,stdin);
    a[strlen(a)-1]='\0';
    i=strlen(a);
    printf("the lenghts of character=%d",i);}
    

// 2.write a function to reverse a string.
char* reverse(char str[])
{
    int l,i;
    char ch;
    l=f1(str);
    for(i=0,i<l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    return 0;
}
// 3.write a function to compare two strings.
void f3()
{
    char a[50],b[50];
    int i;
    printf("enter the first string=");
    fgets(a,50,stdin);
    a[strlen(a)-1]='\0';
    printf("enter the second string=");
    fgets(b,50,stdin);
    i=strcmp(a,b);
    printf("%d\n",i);

}

// 4.write a function to transform  strings into uppercase.
void f4()
{
    char a[50];
    
    printf("enter the first string=");
    fgets(a,50,stdin);
    a[strlen(a)-1]='\0';
    for(int i=0;a[i];i++)
        if(a[i]>='a' && a[i]<='z')
            a[i]=a[i]-32;
            printf("%s",a);
    
    
}

// 5.write a function to transform a string into lowercase.
void f5()
{
    char a[50];
    
    printf("enter the first string=");
    fgets(a,50,stdin);
    a[strlen(a)-1]='\0';
    for(int i=0;a[i];i++)
        if(a[i]>='a' && a[i<='z'])
            a[i]=a[i]+32;
            printf("%s",a);
   
    
}

// 6. write a function to count vowels in a given string.
void f6()
{
    char a[50],v[]="aeiouAEIOU";
    int i,j,count;
    printf("enter the string=");
    fgets(a,50,stdin);
    a[strlen(a)-1]='\0';
    for(i=0, count=0;a[i];i++)
        for(j=0;v[j];j++)
            if(a[i]==v[j])
            {
                count++;
                break;
            }
    printf("count=%d",count);
}
// 7.write a function to find a character in a given string.return index of first occurrence of given character.return -1 if character not found.

int find(char str[],char ch)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(ch==str[i])
            return i;
    }
    return -1;
}
// 8.write a function to find character in a given string between specified indices(start index (inclusive )and end index(exclusive)).
int find_between(char str[], char ch, int start_index, int end_index)
{
    int l=f1(str);
    int i;
    if(end_index >1)
        end_index=l;
    if(start_index>=l)
        return -1;
    for(i=start_index;i<end_index;i++)
        for(ch==str[i])
            return i;
    return -1;
}
// 9.write a function to swap two characters of a given string with specified indices.
void swap(char str[],int index1, int index2)
{
    int l=f1(str);
    char ch;
    if(index1>=0 && index2>=0)
        if(index1>=l || index2>=l)
            printf("swapping not possible");
        else
        {
            ch=str[index1];
            str[index1]= str[index2];
            str[index2]=ch;
        }
}

// 10.write a function to check whether a given string is an alphanumeric string or not.(alphanumeric string must contain at least one alphabet and 
// one digit).
int is_alphanumeric(char str[])
{
    int i, alpha=0,digit=0;
    for(i=0;str[i];i++)
    {
        if(str[i]>='0' && str[i]<=9)
            digit=1;
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
            alpha=1;
    }
    if(digit=alpha)
        return 1;
    else
        return 0;

}
