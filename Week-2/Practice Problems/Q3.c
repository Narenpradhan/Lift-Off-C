#include<stdio.h>
#include<conio.h>
int main(){
    int n,m;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    printf("Enter number of columns: ");
    scanf("%d",&m);
    int arr1[n][m];
    int arr2[n][m];
    int res[n][m];
    printf("Enter the elements of first matrix: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the elements of second matrix: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            res[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("Resultant matrix is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}