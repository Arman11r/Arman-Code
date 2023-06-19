#include<stdio.h>
int main(){
    int n,i,a,p;
    printf("enter array size = ");
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("ehter positio:");
    scanf("%d",&p);
    for(i=p-1;i>n-1;i--)
    {
        x[i]=x[i+1];
        x[n-1]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    return 0;
}