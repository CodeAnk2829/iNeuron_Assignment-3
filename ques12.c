//Program to check whether a given alphabet is in uppercase or lowercase
#include <stdio.h>
int main(){
    char ch;
    printf("Enter your favourite alphabet either in uppercase or in lowercase\n");
    scanf("%c", &ch);
    if((ch >= 'A') && (ch <= 'Z')){
        printf("%c is in Uppercase", ch);
    }
    else if ((ch >= 'a') && (ch <= 'z')){
        printf("%c is in lowercase", ch);
    }else{
        printf("Invalid Input ...character should be an alphabet");
    }
    return 0;
}