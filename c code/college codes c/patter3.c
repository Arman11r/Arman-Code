#include<stdio.h>
int main()
{
    int i , j;
    for(i=1;i<=10;i+=2)
    {
    for(j=1;j<=i;j+=2)
    {
printf("%d",j);
    }
    printf("\n");
    }
    return 0;
}