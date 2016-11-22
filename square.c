/*Name:Nirdesh Dhami
Course:BCS
Roll no.:15
subject:programming fundamental
Date:2016-11-20
*/
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
