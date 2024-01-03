#include<stdio.h>
void main()
{
	char name[100];
	char *p;
	int n,i,count=0;
	p=&name[100];
	
	printf("Enter of String = ");
	gets(name);
	
	for(i=0;name[i]!=NULL;i++)
	{
		count++;
	}
	printf("Lenght of String in Pointer = %d",count);
}