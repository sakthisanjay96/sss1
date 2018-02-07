#include <stdio.h>
#include<string.h>
int main()
{
 char s[100];
 int d=0,i=0;
 printf("Enter any string :");
 gets(s);
  while(s[i]!='\0')
 {
 if(s[i]>='0' && s[i]<='9')
  {
  n++;
  }
  i++;
  }
  printf("numeric = %d\n",d);
  return 0;
}
