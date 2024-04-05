#include<stdio.h>

int main()
{
    int a,b,temp;
    int *ptr1,*ptr2;

    ptr1=&a;
    ptr2=&b;

    printf("Enter the numberss::");
    scanf("%d %d",ptr1,ptr2);

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("ptr1::%d\n",*ptr1);
    printf("ptr2::%d",*ptr2);
}
