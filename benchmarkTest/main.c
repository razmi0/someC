#include <stdio.h>
#include <stdlib.h>

double logTask(int size)
{
    int dummy[size];
    for (size_t i = 0; i < size; i++)
    {
        /* code */
        dummy[i] = i;
        printf("%zu", i);
    }
    printf("\n");

    return 0;
}

int main(int argc, char *argv[])
{
    int size = atoi(argv[1]);
    // Convert the first argument to an integer

    if (size <= 0)
    {
        printf("Invalid size: %d\n", size);
        return 1;
    }

    // Allocate an array dynamically
    int *arr = malloc(size * sizeof(int));
    if (!arr)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize and print the array
    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}