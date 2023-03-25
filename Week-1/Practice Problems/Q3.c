#include <stdio.h>


int main(){
    float len;
    printf("Enter length in cm: ");
    scanf("%f",&len);
    printf("Length in meters: %.3f m",len/100);
    printf("\nLength in kilometers: %f km",len/100000);
    
    return 0;
}