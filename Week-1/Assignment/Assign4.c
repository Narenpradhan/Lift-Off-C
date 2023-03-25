#include<stdio.h>
int main(){
    float a,b;
    int op;
    printf("Enter two number :");
    scanf("%f %f",&a,&b);
    printf("Enter the number for choosing th eoperator:");
    printf("\n1. +");
    printf("\n2. -");
    printf("\n3. *");
    printf("\n4. /\n");
    scanf("%d",&op);
    switch(op){
        case 1: printf("Sum is %f",a+b);break;
        case 2: printf("Subtraction is %f",a-b);break;
        case 3: printf("Product is %f",a*b);break;
        case 4: printf("Division is %f",a/b);break;
    }
    return 0;
}