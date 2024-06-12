#include<stdio.h>

int main(){
    int a=10,b=5;
    int *p,*q;
    p=&a;
    q=&b;
    printf("the value of a=%d\n",a);
    printf("the value of a=%d\n",*p);
    printf("the address of a=%x\n",&a);
      printf("the address of a=%x\n",p);
        printf("the address of p=%x\n",&p);
    return 0;
}