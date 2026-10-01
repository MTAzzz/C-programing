#include<stdio.h>

void reverse(int *a, int *b){
    int t= *a;
    *a=*b;
    *b= t;
}

int main(){
    int x, y;
    x= 2, y=3;
    reverse(&x, &y);
    printf("x is= %d, y is= %d\n", x, y);
}