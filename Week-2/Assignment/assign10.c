#include<stdio.h>
#include<ctype.h>
#include<conio.h>


int main(){
    char str[100];
    int alp=0,dig=0,spe=0;
    printf("Enter a string: ");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        if(isalpha(str[i])) ++alp;
        else if (isdigit(str[i])) ++dig;
        else ++spe;
    }
    printf("Number of Alphabets: %d",alp);
    printf("\nNumber of Digits: %d",dig);
    printf("\nNumber of Special Characters: %d",spe);
    getch();
}