#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a= %d \n",a);
    printf("b= %d",b);
    return 0;
}