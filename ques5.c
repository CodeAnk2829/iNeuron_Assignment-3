//Program to check whether a given number is a three-digit number or not
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if((n >= 100) && (n <= 999)){
        printf("The given number is a three-digit number");
    }else{
        printf("The given number is not a three-digit number");
    }
    return 0;
}