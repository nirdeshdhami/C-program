#include<stdio.h>

         int main()
         {
         int n,i,sum=0,sq;
printf("enter natural number:");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
	sq=i*i;
	sum+=sq;
}
printf("\nsum of square  natural number is=%d",sum);
return 0;
}
