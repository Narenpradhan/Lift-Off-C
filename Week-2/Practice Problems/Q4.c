#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int main(){
    int arr1[3][3];
    
    printf("Enter 1st matrix: ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("original matrix is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<1;i++){
        for(int j=0;j<3;j++){
            if(i==j) continue;
            else swap(&arr1[i][j],&arr1[j][i]);
        }
    }
    swap(&arr1[1][2],&arr1[2][1]);
    printf("Transpose of matrix is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr1[i][j]);
        }
    printf("\n");
    }
    getch();
    return 0;
}