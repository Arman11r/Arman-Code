//how to convert date in years,week,days
#include<stdio.h>
int main() {
    int days;
    float choice;
    printf("enter the number of days: ");
    scanf("%d", &days);
    float years = days/365;
    float weeks = days/7;
    printf("enter the choice-- 1.convert to years   2.convert to weeks");
    scanf("%f", &choice);
    if(choice == 1)
    {
     printf("total years are: %f", years);
    }
    else if (choice == 2)
    {
        printf("total numbers of weeks are: %f",weeks);
    }
    return 0;
}