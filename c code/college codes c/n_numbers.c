#include<stdio.h>
int main()
{
    int a,b,c;
    int x[a][b];
    int i,j;
    for(i=0;i<=a-1;i++)
    {
        printf("enter row");
        scanf("%d",&x[a]);
    }
    for(j=0;j<=b-1;j++)
    {
        printf("enter column");
        scanf("%s",&x[b]);
    }
    printf("the values are %s %s \n",&x[a][b]);
    return 0;

}