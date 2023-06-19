#include<stdio.h>
int main(){
    int i,num,table;
    printf("enter the num:  ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        table=i*num;
        printf("%d*%d=%d\n",num,i,table);
    
    }
    return 0;

}
