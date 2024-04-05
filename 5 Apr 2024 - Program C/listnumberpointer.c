#include<stdio.h>
int main()
{
	int i,n;
	int arr[200];
	int *ptr=arr; // pointer to arr[0]
	
	printf("Enter the numbers::");
	scanf("%d",&n);
	
	printf("Enter the nums::");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	
	ptr=arr;
	
	for(i=0;i<n;i++)
	{
		printf("%d ",*ptr);
		ptr++;
	}
}
