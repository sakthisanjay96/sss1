#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("\nafter swapping:%d%d",a,b);
}
