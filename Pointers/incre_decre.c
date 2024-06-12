#include<stdio.h>
void main(){
    int a[]={3,4,1,8,0,5};
    int *p=a;
    p++;
    printf("%d",*p);
}