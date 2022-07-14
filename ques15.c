//Program to check whether a given number is positive, negative or zero
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if(n > 0){
        printf("%d is Positive", n);
    }else if(n < 0){
        printf("%d is Negative", n);
    }else{
        printf("%d is Zero", n);
    }
    return 0;
}