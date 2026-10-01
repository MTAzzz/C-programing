#include<stdio.h>

void idk(int *n){
    printf("address of x in function= %p\n", n);
}

int main(){
    int x=4;
    idk(&x);
    printf("address of x in main function= %p", &x);
}