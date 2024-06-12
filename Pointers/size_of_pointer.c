#include <stdio.h>
struct employee
{
    int number;
    char name[20];
    float sep;
};

void main()
{
    char* cp;
    int* ip;
    struct employee* sep;
    printf("size of char* is %d\n", sizeof(cp));
     printf("size of int* is %u\n", sizeof(ip));
      printf("size of employee* is %d\n", sizeof(sep));
}