//Program to check whether a student would pass in the exam or not
#include <stdio.h>
int main(){
    int mth, phy, che, eng, cs;
    printf("Enter marks for each subjects (mth, phy, che, eng, cs) respectively\n");
    scanf("%d %d %d %d %d", &mth, &phy, &che, &eng, &cs);
    if((mth >= 33) && (phy >= 33) && (che >= 33) && (eng >= 33) && (cs >= 33)){
        printf("PASS");
    }else{
        printf("FAIL");
    }
    return 0;
}