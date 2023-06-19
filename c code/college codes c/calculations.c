#include <stdio.h>
int main() {
    int a, b, operation;
    printf("enter a :  ");
    scanf("%d", &a);
    printf("enter b :  ");
    scanf("%d", &b);
     int sum = a+b;
    int subtract = a-b;
    int multiply = a*b;
    int divide = a/b;
    printf("enter the operator 1.sum 2.subtract 3.multiply 4.divide (print digits only)");
    scanf("%d",&operation);

    if(operation==1)
    {
        printf("sum is : %d", sum);
    }
    else if (operation == 2)
    {
        printf("subtraction is : %d", subtract);
    }
    else if (operation == 3)
    {
        printf("multiplication is : %d", multiply);
    }
    else if (operation == 4)
    {
        printf("division is : %d", divide);
    }
    else
    {
        printf("invalid");
    }
    return 0;
}    
