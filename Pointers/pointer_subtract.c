#include<stdio.h>
void main(){
    int d;
    int a[]={2,4,6,8,9};
    int *p=&a[1],*q=&a[4];
    d=q-p;
    printf("the number of elements btn p and q = %d\n",d);
    q=&a[2];
    printf("the address of 6 in array is %d\n",q);
    q=q-2;
    printf("the address of new q = %d\n",q);
    
}
