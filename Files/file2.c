#include<stdio.h>
#include<stdlib.h>
void main(){
     FILE *filePointer;
     filePointer=fopen("input.txt", "w");
     if (filePointer == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
     char data[1000];
     printf("Enter data:\n");
     fgets(data,sizeof(data),stdin);
     fprintf(filePointer,"%s",data);
     fclose(filePointer);
     
    filePointer = fopen("mukundi.txt","r");
    if (filePointer == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("Data from file:\n");
    while (fgets(data,sizeof(data),filePointer) != NULL)
    {
        printf("%s",data);
    }
    fclose(filePointer);
    return 0;
    


}