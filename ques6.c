//Program to find greater between two numbers
#include <stdio.h>
int main(){
    int a , b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    if(a > b){
        printf("%d is greater than %d", a, b);
    }else if(a < b){
        printf("%d is greater than %d", b, a);
    }else{
        printf("%d", a);
    }
    return 0;
}