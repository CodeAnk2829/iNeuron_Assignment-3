//Program to find greatest among three numbers
#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b){
        if(a > c){
            printf("%d is the greatest", a);
        }else if(a == c){
            printf("%d", a);
        }else{
            printf("%d is the greatest", c);
        }
    }else if(a < b){
        if(b > c){
            printf("%d is the greatest", b);
        }else if(b == c){
            printf("%d", b);
        }else{
            printf("%d is the greatest", c);
        }
    }else if(a > c){
        printf("%d", a);
    }else{
        printf("%d", c);
    }
    return 0;
}