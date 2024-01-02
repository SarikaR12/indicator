#include<stdio.h>

void main()
{
	int a[100];	
	int *p,n,i;
	p=&a[100];
	
	printf("Enter size of Array =");
	scanf("%d",&n);
	
	printf("Enter Array Element: \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nElement of Array: \n");
	for(i=0;i<n;i++)
	{
		p=&a[i];
		printf("%d ",*p);
	}
}