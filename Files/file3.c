#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char str[50], ch='D';
    int w = 4;
    fp = fopen("abc.txt", "w");
    printf("Enter the string");
    gets(str);
       fclose(fp);
       fp = fopen("abc.txt","r");
    fprintf(fp, "%d %s %c", w, str, ch);
    fclose(fp);
    return 0;
}