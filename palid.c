#include<stdio.h>
int main()
{
    int num,san=0,ss,c;
    printf("Enter a number \n");
    scanf("%d",&num);
    ss=num;
    while (num>0)
    {
        c = num % 10;
        san = san*10+c;
        num = num/10;
    }
    if (ss == san)
        printf("\n The entered number is PALINDROME.");
    else
        printf ("\n The entered number is NOT PALINDROME.");
     return 0;

}
