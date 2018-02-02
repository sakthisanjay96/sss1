#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter your numbers:");
    scanf("%d%d%d",&a,&b,&c);
    a<b?(a<c?printf("\n%dis small",a):printf("\n%dis small",c)):b<c?printf("\n%dis small",b):printf("\n%dis small",c);
    return 0;
}
