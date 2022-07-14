//Program to check whether a given number is divisible by 3 and divisible by 2
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if((n % 3 == 0) && (n % 2 == 0)){
        printf("%d is divisible by both 3 and 2", n);
    }else if(n % 3 == 0){
        printf("%d is divisible by 3 but not divisible by 2", n);
    }else if(n % 2 == 0){
        printf("%d is divisible by 2 but not divisible by 3", n);
    }else{
        printf("%d is neither divisible by 3 nor divisible by 2", n);
    }
    return 0;
}