#include<stdio.h>
int main() {
    float hindi,english,maths,science,sst;
    int choice;
    printf("enter the marks of hindi: ");
    scanf("%f", &hindi);
    printf("enter the marks of english: ");
    scanf("%f",&english);
    printf("enter the number of maths: ");
    scanf("%f",&maths);
    printf("enter the number of science: ");
    scanf("%f",&science);
    printf("enter the marks of sst: ");
    scanf("%f", &sst);
    float t = hindi + english + maths + science + sst;
    float a = (hindi + english + maths + science + sst)/5;
    
    printf("avg or total?");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("average is: %f", a);
    }
    else if(choice == 2)
    {
        printf("total is: %f", t);
    }
    else
    {
        printf("invalid");
    }
    return 0;
}


