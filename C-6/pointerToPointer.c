#include<stdio.h>

int main(){
    float price= 100.00;
    float *ptr = &price; // creat a float pointer named ptr and store the address of price
    float **pptr= &ptr; //creat a float pointer named pptr of another float pointer named ptr and store the address of ptr. (Visualize)

    //pointer to pointer is used for storing the address of a pointer it self. it can be infinite

    // Question: print the value of price using pptr
    printf("%f", *pptr); // it will go to the value at address of ptr which is just the address of price (*ptr=&price) not the actual prize value
    printf("\n%f", **pptr); /*At first it will got to the value at address of ptr and then go to value
     at address of price as there were two* so it won't just do the value at address of thing one
      time but two times*/

}