#include <stdio.h>
#include <stdlib.h>

int main() {
    char *message; // Declare a pointer to hold the character array

    // Allocate memory for 3 characters (each of size 1 byte)
    message = (char*) malloc(3);

    if (message != NULL) {
        printf("Memory allocated successfully!\n");

        // Access and modify the elements (contain garbage values initially)
        message[0] = 'H';
        message[1] = 'i';
        message[2] = '\0'; // Add null terminator for a string

        printf("message: %s", message);

        // Free the allocated memory when you're done
        free(message);
    } else {
        printf("Memory allocation failed!\n");
    }

    return 0;
}
