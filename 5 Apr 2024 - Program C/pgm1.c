#include<stdio.h>
int main()
{

    int a,b;
    int *ptr1,*ptr2;

    ptr1=&a;
    ptr2=&b;

    printf("Enter number::");
    scanf("%d %d",ptr1,ptr2);

    printf("%d",*ptr1+*ptr2);

}
