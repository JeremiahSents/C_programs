//call by value
#include<stdio.h>
void main(){
    int a=20, b=23;
    printf("before swap:\t %d\t %d",a,b);
    swap(a,b);
}
void swap(int x,int y)
{
int temp=x;
x=y;
y=temp;
printf("after swap:\t%d\t%d",x,y);
}

//call by address
#include<stdio.h>
void swap(int*,int*);
void main(){
    int a=20, b=23;
    printf("before swap:\t %d\t %d",a,b);
    swap(&a,&b); //we are swaping addreses
}
void swap(int* x,int* y)//function called swap
{
int temp=*x; //pointer gives value inside the address 
*x=*y; //*pointer to y value is storing into pointer to x
*y=temp;
printf("after swap:\t%d\t%d",*x,*y);
}