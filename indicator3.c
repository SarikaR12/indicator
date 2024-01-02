#include<stdio.h>
main()
{
	int a[100];
	int *p,n,i;
	
	printf("Enter size of Array =");
	scanf("%d",&n);
	
	printf("\nEnter Array Element:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]  = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nReverse Array of pointer: \n");
	for(i=n-1;i>=0;i--)
	{
		p=&a[i];
		printf("%d ",*p);
	}
}

