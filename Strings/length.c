#include<stdio.h>
#include<string.h>

int string_length(char name[]){
    int i = 0 , count = 0;
    while (name[i] != 0)
    {
      count++;
      i++;
    }
    return count;
}
int main(){
    char name[50];
    int length;
    printf("Enter your names:\n");
   fgets(name, sizeof(name), stdin);
   
    length = string_length(name);
    length-=1;
    printf("Your name is %d letters long. ",length);
    return 0;
}