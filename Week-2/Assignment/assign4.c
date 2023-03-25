#include<stdio.h>
#include<conio.h>


int main(){
    int k=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<i+1;j++){
            printf("%d ",k);
            ++k;
        }
        printf("\n");
    }
    getch();
}