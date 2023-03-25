#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

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
    for (int i=0;i<si-1;i++){
        for(int j=i+1;j<si;j++){
            if(arr[i]>arr[j]) swap(&arr[i],&arr[j]);
        }
    }
    int max=1,count=1,fin=arr[0];
    for(int i=1;i<si;i++){
        if(arr[i]==arr[i-1]) count++;
        else count=1;
        if(count>max){
            max=count;
            fin=arr[i-1];
        }
    }
    printf("Maximum occuring integer is %d",fin);
    getch();
}