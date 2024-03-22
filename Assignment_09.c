#include<stdio.h>

int main(){
      int element=100;
      int *ptr = &element; //pointer declaration and intialize a pointer with a address of variable element.
       
      printf("The value of element is:%d\n",*ptr); 
      printf("The value of element is:%d\n",element);
      printf("The adress of the element is:%u\n",&element);
      printf("The adress of the element is:%u",ptr);
     return 0;
}