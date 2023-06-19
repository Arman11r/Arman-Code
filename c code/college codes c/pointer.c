#include<stdio.h>
int main()
{
    int *a;
    int x;
    printf("enter any number=  ");
    scanf("%d",&x);
    a=&x;
    printf("the value of variable = %d \n",x);
    printf("the address of variable = %d",*a);
}