#include<stdio.h>
int main()
/// @brief 
/// @return
{
    int x,y;
    int *a,*b;
    printf("enter any number for x =  ");
    scanf("%d",&x);
    printf("enter any number for y =  ");
    scanf("%d",&y);
    a=&x;
    b=&y;
    printf("the address of x is = %d \n",*a);
    printf("the value of x is= %d \n",x);
    printf("the address of y is = %d \n",*b);
    printf("the value of y is = %d \n",y);
return 0;
}
