
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
    if(str[i]==0)
        printf("%c not found in %s\n",ch,str);
    else
        printf("%c is found in %s at %d index\n",ch,str,i);
            
    
}