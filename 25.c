#include<stdio.h>
int main()
{
  int i,strt,end,middle,n,search,array[20];
  printf("Enter number of elements \n");
  scanf("%d",&n);
  printf("Enter %d integers \n",n);
  for(i=0;i<n;i++)
  scanf("%d",&array[i]);
  printf("Enter value to find \n");
  scanf("%d",&search);
  strt=0;
  end=n-1;
  middle=(strt+end)/2;
  while(strt<=end)
  {
    if(array[middle]<search)
  {
   printf("%d found at location %d \n",search,middle +1);
   break;
   }
   else
    end=middle-1;
    middle=(strt+end)/2;
    }
    if(strt>end)
    printf("not found %d is not present in the last.\n",search);
    return 0;
    }
