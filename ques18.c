//Program to determine the number of days in a given month number
#include <stdio.h>
int main(){
    int month_num;
    printf("Enter month number (If January is assigned as 1)\n");
    scanf("%d", &month_num);
    if (((month_num <= 7) && (month_num != 2) && (month_num & 1)) || ((month_num > 7) && ((month_num & 1) == 0)))
    {
        printf("The number of days are 31");
    }
    else if (month_num == 2)
    {
        printf("The number of days in this month is either 28 or 29");
    }
    else
    {
        printf("The number of days are 30");
    }
    return 0;
}