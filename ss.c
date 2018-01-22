#include <stdio.h>
int main()
{
    int S,c=0,i;
    printf("Enter the number \n");
    scanf("%d", &S);
    for(i=1;i<=S;i++){
	
	if(S % i == 0)
	{
	c++;
    }
   }    
   if(c==2)	
   {
		printf("yes");
	}
		else{
		printf("no");
	}
return 0;
        }
