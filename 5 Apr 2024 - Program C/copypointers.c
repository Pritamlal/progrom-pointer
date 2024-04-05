#include <stdio.h>

#define MAX_SIZE 100

void printArray(int arr[], int size);

int main() {
    int source_arr[MAX_SIZE], dest_arr[MAX_SIZE];
    int size, i;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &source_arr[i]);
    }

    for (i = 0; i < size; i++) {
        dest_arr[i] = source_arr[i];
    }

    printf("\nSource array: ");
    printArray(source_arr, size);

    printf("\nDestination array: ");
    printArray(dest_arr, size);

    return 0;
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

