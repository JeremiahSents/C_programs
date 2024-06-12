#include<stdio.h>
void main(){
    int a[]={2,4,5,1,6};
    int *p=&a[2];
    printf(" value is %d\n",*p);
   printf("address of element is %u\n",p);
   p=p+2;
   printf("value is %d\n",*p);
   printf("address of element is %u\n",p);
}

