#include <stdio.h>
int main()
{
    int age ,result;
    char name[40];
    printf("Enter your full names:\n");
    gets(name);
    printf("Enter your year of birth:\n");
    scanf("%i",&age);
    result=2024-age;
    printf("My name is %s\n", name);
      printf("My age is %d\n", result);
    return 0;
}