#include<stdio.h>
int main()
{
    int i , j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
    {
        
            for(k=j;k>=1;k--)
        {
printf("%d",k);
    }
    }
    printf("\n");
    }
return 0;
}
