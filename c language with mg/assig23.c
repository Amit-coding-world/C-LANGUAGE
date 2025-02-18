#include<stdio.h>
#include<string.h>
// 1.write a function to check whether a given string is palindrome or not.
int is_palidrome(char str[])
{
    int i,l;
    l=strlen(str);
    for(i=0;i<l/2;i++)
    if(str[i]!=str[l-1-i])
        return 0;
    return1;
}
// 2. write a function to trim a string (removing leading spaces from both ends).
char* trim (char str[])
{
    int i=0,j,k,count=0;
    for(k=strlen(str)-1;str(k)==' ';k--)
        count ++;
    k=strlen(str);
    while(str[i]==' ')
        i++;
    for(j=0;str[j+1];j++)
        str[j]=str[j+i];
    str[k-count-i]='\0';
    return str;
}
int main()
{
    char str["   abc c   "];
    printf("length before trimming=%d",strlen(str));
    printf("\n %s",trim(str));
    printf("lenght after trimming=%d",strlen(str));
    return 0;
}
// 3. write a function to count words in a given string.
int count_word(char str[])
{
    int i,count=0;
    trim(str);
    for(i=0;str[i];i++)
    {
        if(str[i]==' ')
        {
            if(str[i]==str[i+1])
                continue;
            else
                count++;
        }
    }
    return count++;
}
int main()
{
    char str[]="  ab   abr  de   "
    printf("total word=%d \n",count_words(str));
}
// 4.write a function to reverse a string word wise.(for example if the given string is "mysirg education services" )


// 5. write a function to do case insenstitive comparsion of two strings .
int compare_case_ignore(char s1[], char s2[])
{
    int i;
    for(i=0;st1[i];i++)
        if(s1[i]>='a' && s1[i]<='z')
            s1[i]-=32;
    for(i=0;s2[i];i++)
        if(s1[i]>='a' && s1[i]<='z')
            s1[i]-=32;
    for(i=0;s1[i]&& s2[i];i++)
        if(s1[i]!=s2[i])
            return 0;//not same
        if(s1[i]==s2[i])
            return 1; // same string
        else
            return 0; //not same

}
// 6.write a function to count frequency of each character of the given string.
(char )

// 7.write a function to find a word in a given string.
// 8. write a function to make first character of each word of the string captial.
// 9. write a function to make acronym name from a given name.for example "ramesh chand tiwari" becomes "r c tiwari","bhavesh gupta" becomes "b gupta".
// 10.write a function to concatenate two strings.