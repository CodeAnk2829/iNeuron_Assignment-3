//Program to check whether a given number is divisible by 5 or not
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if(n % 5 == 0){
        printf("Divisible by 5");
    }else{
        printf("Not Divisible by 5");
    }
    return 0;
}