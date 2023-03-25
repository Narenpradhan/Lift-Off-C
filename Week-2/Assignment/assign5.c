#include<stdio.h>
#include<conio.h>


int main(){
    int si;
    printf("Enter the size of array: ");
    scanf("%d",&si);
    int arr[si],num;
    for(int i=0;i<si;i++){
        printf("Enter a number: ");
        scanf("%d",&num);
        arr[i]=num;
    }
    int arr2[si];
    for(int i=0;i<si;i++){
        arr2[i]=arr[i];
    }
    printf("Copying the contents of the first array into another array . . .");
    printf("\nContents of another array : ");
    for(int i=0;i<si;i++){
        printf("%d ",arr2[i]);
    }
    getch();
}