#include<stdio.h>
int main()
{
int l,b,h,p,t;
printf("enter length,breadth and heigh of a cuboid:\n");
scanf("%d%d%d",&l,&b,&h);
p=l*b*h;
t=2*(l*b+b*h+h*l);
printf("volume of cuboid %d\n",p);
printf("total surface area of cuboid %d",t);
return 0;
}
