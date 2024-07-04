#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
    char name[50];
    printf("Enter your names:\n");
    fgets(name, sizeof(name), stdin);
    while (name[i] != '\0')
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] = name[i] + 32;
        }
        i++;
    }
    printf("Lowercase name: %s\n", name);
    return 0;
}