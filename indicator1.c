#include<stdio.h>

main()
{
	int a,b;
	int *p,*p1;
	
	p=&a;
	p1=&b;
	
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("Enter value of B = ");
	scanf("%d",&b);
	
	*p=*p+*p1;
	*p1=*p-*p1;
	*p=*p-*p1;
	
	printf("Swapping value of A & B:\n");
	printf("Value of A =%d\n",*p);
	printf("Value of B =%d\n",*p1);
}