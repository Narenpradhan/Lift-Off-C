#include <stdio.h>


int main(){
    float a,b,c;
    printf("Enter the angles of the triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a+b+c==180){
        printf("This is a valid triangle.");
    }
    else printf("This is not a valid triangle.");
    
    return 0;
}