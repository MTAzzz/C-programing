#include<stdio.h>

int main(){
    int age=22;
    int *ptr= &age;
    printf("ptr = %p", ptr);
    ptr++;
    printf("\nptr = %p", ptr);
}