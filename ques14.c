//Program to check whether a given number is divisible by 7 or divisible by 3
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if((n % (7 * 3) == 0)){
        printf("%d is divisible by both 7 and 3", n);
    }else if((n % 7 == 0) || (n % 3 == 0)){
        printf("%d is divisible by either 7 or 3", n);
    }else{
        printf("%d is neither divisible by 7 nor divisible by 3", n);
    }
    return 0;
}