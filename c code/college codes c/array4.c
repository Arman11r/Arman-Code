#include<stdio.h>
int main()
{
int n,i,j,c;
printf("enter array size=   ");
scanf("%d",&n);
int x[n];
for(i=0;i<n;i++)
{
    scanf("%d",&x[i]);
}
for(i=0;i<n;i++)
{
    for(j=i;j<n;j++)

    {
        if(x[i]>x[j])
        {
            c=x[i];
            x[i]=x[j];
            x[j]=c;
        }
    }
}
printf("sorted array=   ");
for(i=0;i<n;i++)
{
    printf("%d \n",x[i]);
}}