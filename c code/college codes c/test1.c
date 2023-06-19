#include<stdio.h>
int main(){
    int a[100];
    int n,i,item;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter elemenys:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("inser elenent at biggning");
    scanf("%d",&item);
    n++;
    for(i=n;i>1;i--)
    {
        a[i-1]=a[i-2];

    }
    a[0]=item;
    printf("the final array is ; ");
    for(i=0;i<n;i++)
    {
        printf("%d \n", a[i] );
    }
    return 0;
}