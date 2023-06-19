#include<stdio.h>
int main() {
    int a ;
    int n;
    printf("enter the number: ");
    scanf("%d",&a);

    if (a % 2 == 0)
    {
        printf("the number is non-prime since it is divisible by 2");
    }
    else if(a % 3 == 0)
    {
        printf("the number is non-prime since it is divisible by 3 ");
    }
    else
    {
        printf("this number is prime since it is ");
    }
    
    return 0;

}