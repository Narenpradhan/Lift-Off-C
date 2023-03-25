#include <stdio.h>


int main(){
    float a,b,c;
    printf("Enter the angles of the triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a+b+c==180){
        if(a==b && b==c ){
            printf("This is a equilateral triangle.");
        }
        else if((a==b && a!=c) || (b==c && b!=a) || (c==a && c!=b)){
            printf("This is a isosceles triangle.");
        }
        else printf("This is a scalene triangle.");
    }
    else printf("This is not a valid triangle.");
    
    return 0;
}