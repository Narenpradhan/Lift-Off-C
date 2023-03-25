#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int si;
    printf("Enter the size of the array: ");
    scanf("%d",&si);
    int arr[si],num;
    for(int i=0;i<si;i++){
        printf("Enter the elements of array: ");
        scanf("%d",&num);
        arr[i]=num;
    }
    for(int i=0;i<si-1;i++){
        for(int j=i+1;j<si;j++){
            if(arr[i]>arr[j]) swap(&arr[i],&arr[j]);
        }
    }
    printf("Sorted array: ");
    for(int i=0;i<si;i++){
        printf("%d ",arr[i]);
    }
    getch();
}