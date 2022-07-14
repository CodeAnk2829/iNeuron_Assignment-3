//Program to check whether a year is a leap year or not
#include <stdio.h>
int main(){
    int yr;
    printf("Enter any year\n");
    scanf("%d", &yr);
    if(((yr % 100 == 0) && (yr % 400 == 0)) || ((yr % 100) && (yr % 4 == 0))){
        printf("Leap Year");
    }else{
        printf("Not a Leap Year");
    }
    return 0;
}