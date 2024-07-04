#include <stdio.h>
#include <string.h>

int string_length(char name[]){
    int i = 0 , count = 0;
    while (name[i] != 0)
    {
      count++;
      i++;
    }
    return count;
}
int main()
{
    char name[50];
    int length;
    printf("Enter your names:\n");
    fgets(name, sizeof(name), stdin);
    
    // size_t len = strlen(name);
    // if (len >0 && name[len - 1] == '\n')
    // {
    //   name[len - 1] = '\0';
    // }
    
    int i =0;
    int j = string_length(name) - 1 ;
    while ( i < j)
    {
       int temp = name[i];
       name[i] = name[j];
       name[j] = temp;
       i ++;
       j --;
    }
   printf("Reversed Name is %s",name);
    return 0;
}