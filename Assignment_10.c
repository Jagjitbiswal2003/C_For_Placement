#include<stdio.h>

//call by value 
void swap_callbyvalue(int a, int b)
{
     int temp=a;
     a=b;
     b=temp;
      printf("After swapping by call by value method:\n");
      printf("%d %d\n",a,b);
}
 //call by reference
 void swap_callbyreference(int *a, int *b){
      int temp=*a;
      *a=*b;
      *b=temp;
      printf("After swapping by call by reference method:\n");
      printf("%d %d",*a,*b);
 }

void main(){
    int a,b;
    printf("Enter two numbers to swap:\n");
    scanf("%d %d",&a,&b);
    swap_callbyvalue(a,b);
    swap_callbyreference(&a,&b);
}