#include<stdio.h>
int add(int x,int y){
    int z=x+y;
    return z;
}
int multiply(int x, int y, int z){
    int w=x*y*z;
    return w;
}
    void main(){
        int r,d;
        int (*ptr)(int,int);
      r= add(10,20);
      d=multiply(2,4,6);
      printf("%d\n%d\n",r,d);
      ptr=&add;
      r=ptr(40,60);
      printf("%d",r);
    }