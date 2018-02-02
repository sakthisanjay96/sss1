#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter your numbers:");
    scanf("%d%d%d",&a,&b,&c);
    a>b?(a>c?printf("\n%dis greater",a):printf("\n%dis greater",c)):b>c?printf("\n%dis greater",b):printf("\n%dis greater",c);
    return 0;
}
