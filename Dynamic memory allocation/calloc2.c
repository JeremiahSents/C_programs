#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numbers; // Declare a pointer to hold the integer array

    // Allocate memory for 5 integers (each of size 4 bytes on most systems)
    numbers = (int*) calloc(5, sizeof(int));

    if (numbers != NULL) {
        printf("Memory allocated successfully!\n");

        // Access and modify the elements (all initialized to 0)
        for (int i = 0; i < 5; i++) {
            numbers[i] = i * 10; // Assign values (e.g., 0, 10, 20, 30, 40)
            printf("numbers[%d] = %d\n", i, numbers[i]);
        }

        // Free the allocated memory when you're done
        free(numbers);
    } else {
        printf("Memory allocation failed!\n");
    }

    return 0;
}
