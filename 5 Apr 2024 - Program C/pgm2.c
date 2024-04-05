#include<stdio.h>

int main()
{
    int a,b;
    int *ptr1,*ptr2;

    ptr1=&a;
    ptr2=&b;

    printf("Enter the numbers:: ");
    scanf("%d %d",ptr1,ptr2);

    printf("Sum: %d \n",(*ptr1) + (*ptr2));
    printf("Difference: %d \n",(*ptr1) - (*ptr2));
    printf("Product: %d \n",(*ptr1) * (*ptr2));
    printf("Division: %d",(*ptr1) / (*ptr2));

    return 0;
}
