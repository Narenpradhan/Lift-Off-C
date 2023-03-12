#include <stdio.h>


int main(){
    int i=5;
    float marks,total;
    while(i--){
        printf("Enter the marks: ");
        scanf("%f",&marks);
        total+=marks;
    }
    printf("Total marks are %.2f:",total);
    printf("Average marks are %.2f:",total/5);
    printf("Percentage of marks is %.2f%:",total/5);
    
    return 0;
}