//Program to check the nature of roots of a quadratic equation
#include <stdio.h>
int main(){
    int a , b , c;
    printf("Enter coefficients of x^2 & x and the constant respectively\n");
    scanf("%d %d %d", &a , &b , &c);
    int Discriminant = (b * b) - (4 * a * c);
    if(Discriminant > 0){
        printf("Roots are real and distinct");
    }else if(Discriminant == 0){
        printf("Roots are real and equal");
    }else{
        printf("Roots are imaginary");
    }
    return 0;
}