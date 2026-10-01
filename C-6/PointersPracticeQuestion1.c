#include<stdio.h>

int main(){
    int i=5;
    int *ptr= &i; //it means Create an int pointer called ptr, and put the address of i into it.
    *ptr= 6; /*Value at adress of i since it was initiated as an int pointer and it was
                stored the address of i, so it will go and change i into 6 as i's address was
                stored in int pointer named ptr and *ptr=6 which means change the
                 value at address of i into 6 */


    printf("%d", i);
    printf("\n%d", *ptr); 

    // --------------------//
    *ptr += 5; // *ptr = *ptr+5  so *ptr was 6 so 6+5=11 so *ptr= *ptr+5 is now *ptr=11 
    printf("\ni = %d", i);   //i also becomes 11 as *ptr is technically i 
    printf("\n*ptr = %d", *ptr);  // well its 11 

    

}