#include<stdio.h>

int main(){
    int num= 6767;
    printf("%p", &num);
    int *ptr= &num;
    printf("\n%p", ptr);
    printf("\n%p", &ptr);
}