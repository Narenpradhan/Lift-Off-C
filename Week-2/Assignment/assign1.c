#include<stdio.h>
#include<conio.h>

int main(){
    int si;
    printf("Enter the size of array: ");
    scanf("%d",&si);
    int arr[si],num,count=0;
    for(int i=0;i<si;i++){
        printf("Enter a number: ");
        scanf("%d",&num);
        arr[i]=num;
    }
    printf("Enter a number to count its occurrences: ");
    scanf("%d",&num);
    for(int i=0;i<si;i++){
        if(arr[i]==num) count++;
    }
    printf("Number of occurrences of %d is %d",num,count);
    getch();
}