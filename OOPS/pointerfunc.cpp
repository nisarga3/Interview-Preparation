#include <stdio.h>

// Function that modifies the value using a pointer
void modifyValue(int *x)
{
    *x = *x * 2;
}

// Function that modifies array elements using a pointer
void modifyArray(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        arr[i] = arr[i] * 2;
    }
}

int main()
{
    int value = 5;

    // Passing the address of 'value' to the function
    modifyValue(&value);

    printf("Modified value: %d\n", value); // Output: Modified value: 10

    int numbers[] = {1, 2, 3, 4, 5};

    // Passing the array and its size to the function
    modifyArray(numbers, 5);

    // Printing the modified array
    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", numbers[i]); // Output: 2 4 6 8 10
    }

    return 0;
}
