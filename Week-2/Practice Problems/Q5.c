#include<stdio.h>
#include<ctype.h>
#include<conio.h>


int main(){
    char str[100],ch;
    
    printf("Enter a string: ");
    int i=0;
    while((int)ch!=10){
        char *ptr=NULL;
        scanf("%c",&ch);
        if(isalpha(ch)) {
            str[i]=ch;
            ++i;
        }
        else if(isspace(ch)){
            str[i]=ch;
            ++i;
        }
        else {
            scanf("%c",ptr);
        }
    }
    str[i]='\0';
    printf("String Containing only alphabets: ");
    puts(str);
    getch();
}