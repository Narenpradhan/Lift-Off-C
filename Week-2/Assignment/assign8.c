#include<stdio.h>
#include<ctype.h>
#include<conio.h>


int main(){
    char str[100],ch;
    int con=0,vow=0;
    printf("Enter a string: ");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        ch=tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') ++vow;
        else if (isspace(str[i])) continue;
        else ++con;
    }
    printf("Number of Vowels: %d",vow);
    printf("\nNumber of Consonants: %d",con);
    getch();
}