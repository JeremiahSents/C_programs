#include<stdio.h>
#include<stdlib.h>

int main(){
    int* score,*p;
    int size;

    printf("how many scores\n");
    scanf("%i",&size);

    score=(int*)malloc(size* sizeof(int));
    if (score==NULL)
    {
      printf("No space Avaliable\n");
      exit(1);
    }

    printf("The address of the first byte is %p\n",(void*)score);
    printf("Input the scores\n");

    for (p = score; p < score; p++)
    {
       scanf("%i",p);
    }
    //
    for (p  = score; p < score; p++) {
        printf("%i is stored in address %p\n",*p,(void*)p);
    }
 //free allocated memory
    free(score);
    
    return 0;
}