#include<stdio.h>
int main() {
    int a,b;
    printf("enter the value of angle A: ");
    scanf("%d", &a);
    printf("enter the value of angle B: ");
    scanf("%d", &b);
    int c = 180 -(a+b);
    printf("the third angle is: %d",c);
    return 0;
}