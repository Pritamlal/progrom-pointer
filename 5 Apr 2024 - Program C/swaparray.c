#include<stdio.h>

void inputArray(int *arr,int size);
void printArray(int *arr,int size);
void swapArray(int *sourceArr,int *destArr,int size);

int main()
{
	int sourceArr[100];
	int destArr[100];
	
	int size;
	
	printf("Enter Size of Array:");
	scanf("%d",&size);
	
	printf("Enter the numberss::");
	inputArray(sourceArr,size);
	
	printf("Enter the numbers::");
	inputArray(destArr,size);
	
	swapArray(sourceArr,destArr,size);
	
	printf("\n After Swapping:");
	printArray(sourceArr,size);
	
	printf("\n After Swapping:");
	printArray(destArr,size);
}

void inputArray(int *arr,int size)
{
	int *arrend= (arr+(size-1));
	
	while(arr<=arrend)
	scanf("%d",arr++);
}

void printArray(int *arr,int size)
{
	int *arrend = (arr+(size-1));
	
	while(arr<=arrend)
	printf("%d",*(arr++));
}

void swapArray(int *sourceArr,int *destArr,int size)
{
	int *sourceArrend = (sourceArr + (size-1));
	
	int *destArrend = (destArr + (size-1));
	
	while(sourceArr <= sourceArrend && destArr <= destArrend)
	{
		*sourceArr ^= *destArr;
		*destArr ^= *sourceArr;
		*sourceArr ^= *destArr;
		
		sourceArr++;
		
		destArr++; 
	}
}
