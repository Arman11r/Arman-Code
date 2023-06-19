#include<stdio.h>
int main() {
    char qual;
    int yr;
    printf("enter qualification:");
    scanf("%c",&qual);
    printf("enter year:");
    scanf("%d",&yr);
    if ((yr>10)&&(qual=='p'))
    {
        printf("15000");
    }
    else if ((yr<10)&&(qual== 'p'))
    {
        printf("10000");
    }
    else if ((yr<10)&&(qual == 'u'))
    {
        printf("7000");
    }
    else
    {
        printf("invalid");
    }
    return 0;
}



