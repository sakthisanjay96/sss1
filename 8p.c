#include <stdio.h>
#include<string.h>
int main()
{
	char s[100];
    int p,i;
    printf("enter something:\n");
    scanf("%[^\t\n]s",s);
    p=strlen(s);
    s[0]=s[0]-32;
    for(i=0;i<l;i++)
    {
      if(s[i]==' ')
      {
       s[i+1]=s[i+1]-32;
      }
    }
    printf("%s",s);

	return 0;
}
