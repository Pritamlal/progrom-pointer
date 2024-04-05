#include<stdio.h>
void swap(int *a,int *b);

int main()
{
	int a,b,temp;
	
	printf("Enter the number::");
	scanf("%d %d",&a,&b);
	
	swap(&a,&b);
	
	printf("%d\n",a);
	printf("%d",b);
}

void swap(int *a ,int *b)
{
	int temp;
	
	temp=*a;
	
	*a=*b;
	
	*b=temp;
}
