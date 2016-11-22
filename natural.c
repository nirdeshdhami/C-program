#include<stdio.h>

         int main()
         {
         int n,i,sum=0;
printf("enter natural number:");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
	sum+=i;
}
printf("\nsum of natural number is=%d",sum);

return 0;
}
