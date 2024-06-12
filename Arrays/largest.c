#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,89,21,45,67};
    int i;
    int large=arr[0];
    for ( i = 1; i < 8; i++)
    {
     if (arr[i]>large)
     {
      large =  arr[i];
     }
     }
    printf("largest element is:%d",large);
    return 0;

}  