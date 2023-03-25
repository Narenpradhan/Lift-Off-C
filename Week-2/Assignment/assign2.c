#include<stdio.h>
#include<conio.h>

int main(){
    int si,siz;
    printf("Enter the size of first array: ");scanf("%d",&si);
    printf("Enter the size of second array: ");scanf("%d",&siz);
    int arr[si+siz],num;
    for(int i=0;i<si+siz;i++){
        if(i<si) printf("Enter the elements of first array: ");
        else printf("Enter the elements of second array: ");
        scanf("%d",&num);
        arr[i]=num;
    }
    printf("Reversed array: ");
    for(int i=0;i<si+siz;i++){
        printf("%d ",arr[si+siz-i-1]);
    }
    getch();
}