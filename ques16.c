//Program to determine a given character
#include <stdio.h>
int main(){
    char ch;
    printf("Enter your favourite character\n");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("%c is an alphabet (uppercase)", ch);
    }else if(ch >= 'a' && ch <= 'z'){
        printf("%c is an alphabet (lowercase)", ch);
    }else if(ch >= '0' && ch <= '9'){
        printf("%c is a digit", ch);
    }else{
        printf("%c is a special character", ch);
    }
    return 0;
}