#include<stdio.h>
void main(){
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    printf("value of a=%d\n",a);
    printf("value of a=%d\n",*p);
    printf("value of a=%d\n",*(*q));
     printf("value of a=%d\n",*(*(*r)));
     printf("adress of q=%x %x\n",&q,r);
      printf("adress of p=%x %x\n",&p,q);

}