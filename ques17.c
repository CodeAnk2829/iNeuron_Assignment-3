//Program to check whether a triangle is valid or not
#include <stdio.h>
int main(){
    int a, b, c;
    int largest_side;
    printf("Enter the three sides (a, b, c) of a triangle\n");
    scanf("%d %d %d", &a, &b, &c);

    // Determining the largest side of the given triangle
    if(a > b){
        if(a > c){
            largest_side = a;
        }else{
            largest_side = c;
        }
    }else if(a < b){
        if(b > c){
            largest_side = b;
        }else{
            largest_side = c;
        }
    }else if(a > c){
        largest_side = a;
    }else{
        largest_side = c;
    }
    
    // Deciding the triangle is possible or not according to the given length of the sides
    if(largest_side < ((a + b + c) - largest_side)){
        printf("Triangle is possible");
    }else{
        printf("Triangle is not possible");
    }
    return 0;
}