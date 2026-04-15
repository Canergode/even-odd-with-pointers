#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int *pointer;
    int i;

    // Print all elements
    printf("Original array:\n");
    for(i=0;i<15;i++)
    {
        printf("%4d",*(arr+i));
    }

    // Print even numbers using index
    printf("\nEven numbers in the array:\n");
    for(i=0;i<15;i+=2)
    {
        printf("%4d",*(arr+i));
    }

    // Print odd numbers using pointer
    printf("\nOdd numbers in the array:\n");
    for(pointer=arr+1;pointer<arr+15;pointer+=2)
    {
        printf("%4d",*pointer);
    }
    return 0;
}
