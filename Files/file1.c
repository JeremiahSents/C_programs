#include <stdio.h>

int main()  
{ 
    FILE *f1; 
    char C; 
     
    printf("Data input:\n"); 
    f1 = fopen("Input.txt", "w");  // open the file for writing
    if (f1 == NULL) {
        perror("Error opening file for writing");
        return 1;
    }
     
    // Read characters from the keyboard and write them to the file
    while ((C = getchar()) != EOF)  // get character from the keyboard
    {   
        putc(C, f1);  // write the character to "Input.txt"
    } 
     
    fclose(f1);  // close the file
     
    printf("Data output:\n"); 
    f1 = fopen("Input.txt", "r");  // reopen the file "Input.txt" for reading
    if (f1 == NULL) {
        perror("Error opening file for reading");
        return 1;
    }
     
    // Read characters from the file and print them to the screen
    while ((C = getc(f1)) != EOF) { 
        putchar(C);  // print each character
    } 
     
    fclose(f1);  // close the file
     
    return 0;
}
