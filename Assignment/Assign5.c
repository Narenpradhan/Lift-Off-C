#include<stdio.h>
int main(){
    float radius;
    printf("Enter radius of cirle :");
    scanf("%f",&radius);
    printf("Diameter is: %.2f",2*radius);
    printf("\nCircumference is: %.2f",2*3.14*radius);
    printf("\nArea is: %.2f",3.14*radius*radius);
    return 0;
}