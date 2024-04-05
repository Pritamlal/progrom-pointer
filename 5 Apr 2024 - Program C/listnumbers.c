#include<stdio.h>
int main()
{
	int n,i;
	int arr[200];
	
	printf("Enter number::");
	scanf("%d",&n);
	printf("Enter 10 numberss::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
