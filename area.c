#include<stdio.h>
#include<stdlib.h>
 int main(){
	int area,perimeter,length,breadth,height,areat;
	char a;
	printf("\n****************");
	printf("\n1.Area of rectangle");
	printf("\n2.Perimeter of rectangle");
	printf("\n3.Area of Trapazium");
	printf("\n4.Exit");
	printf("\n*****************");
	 printf("\nSelect your choice");
	 scanf("%s",&a);
	switch(a){
		case '1':
		printf("\nEnter length of rectangle:");
		scanf("%d",&length);
		printf("\nEnter the breadth of rectangle:");
		scanf("%d",&breadth);
		
		area=length*breadth;
		printf("\nThe area of rectangle is:%d",area);
		
		break;
		case '2':
		printf("\nEnter length of rectangle:");
		scanf("%d",&length);
		printf("\nEnter the breadth of rectangle:");
		scanf("%d",&breadth);
		perimeter=2*(length+breadth);
		printf("\nThe perimeter of rectangle is:%d",perimeter);
		
		break;
		case '3':
		printf("\nEnter the length of trapezium:");
		scanf("%d",&length);
		printf("\nEnter the breadth of trapezium:");
		scanf("%d",&breadth);
		printf("\nEnter the height of trapezium:");
		scanf("%d",&height);
		areat=0.5*(length+breadth)*height;
		printf("\nThe area of trapezium is:%d",areat);
		
		break;
		case '4':
		exit(0);
		default:
		printf("Please valid input");
	}
	
	return 0;
}
		
		
		
		
