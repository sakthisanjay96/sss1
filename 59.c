#include "stdio.h"
int main()
{
  int p[10],i,n,m;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&p[i]);
     m= p[0];
     for(i=0;i<n;i++)
    {
     if(p[i]>m)
     m= p[i];
     }
     printf("largest number %d",m);
     return 0;
}
