3include<stdio.h>
int main()
{
char a[100];
int v,b=0;
printf("\n enter the essay");
scanf("%s",&a);
for(v=0;a[v]!='\0';v++)
{
if(a[v]>='0' && a[v]>='9')
{
b++;
}
}
printf("%d",b);
return 0;
}
