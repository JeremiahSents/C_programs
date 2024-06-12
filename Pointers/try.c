#include <stdio.h>
void main()
{
    int a = 100;
    int *pointer;
    pointer = &a;
    printf("%u\n", a); //value of a
    printf("%u\n", pointer); //value of address of a stored in pointer address
    printf("%u\n", &a); // memory address of value of a
    printf("%u\n", &pointer);//memory address of pointer 
    printf("%u\n", *pointer);//pointer has address of a and at memory location of a is value 100 that is pointed to so its printed
    printf("%u\n", *(&a));//points to value that is at address of a
}