//Program to calculate profit and loss percentage
#include <stdio.h>
int main(){
    int cp, sp;
    float profit, loss;
    printf("Enter cost price and selling price respectively\n");
    scanf("%d %d", &cp, &sp);
    if(sp >= cp){
        profit = (sp - cp) * 1.0 / cp;
        printf("Profit %% = %.2f %%", profit * 100.0);
    }else{
        loss = (cp - sp) * 1.0 / cp;
        printf("Loss %% = %.2f %%", loss * 100.0);
    }
    return 0;
}