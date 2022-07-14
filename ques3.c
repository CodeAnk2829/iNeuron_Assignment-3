//Program to check whether a given number is Even or Odd 
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if((n % 2) == 0){
        printf("Number is Even");
    }else{
        printf("Number is Odd");
    }
    return 0;
}