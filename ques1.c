//Program to check whether a given number is Positive or Non-Positive
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d" , &n);
    if(n > 0){
        printf("Positive");
    }else{
        printf("Non-Positive");;
    }
    return 0;
}