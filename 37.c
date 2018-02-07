#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the 1st number:");
    scanf("%d",&a);
    printf("\nenter the 2nd number:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
printf("\nafter swapping:%d %d",a,b);
return 0;
    
}
