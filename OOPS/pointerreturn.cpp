#include <stdio.h>
#include <stdlib.h>

// Function that dynamically allocates memory and returns a pointer to it
int *createIntArray(int size)
{
    int *arr = (int *)malloc(size * sizeof(int));

    // Initialize array elements (for demonstration purposes)
    for (int i = 0; i < size; ++i)
    {
        arr[i] = i + 1;
    }

    return arr;
}

int main()
{
    int size = 5;

    // Calling the function to create an array
    int *dynamicArray = createIntArray(size);

    // Printing the dynamically allocated array
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", dynamicArray[i]); // Output: 1 2 3 4 5
    }

    // Don't forget to free the dynamically allocated memory
    free(dynamicArray);

    return 0;
}
