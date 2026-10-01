#include<stdio.h>

int calc(int a, int b, int *sum, int *product, int *avg){
    *sum= a+b;
    *product= a*b;
    *avg= (a+b)/2;

}

int main(){
    int a, b;
    printf("Enter a:");
    scanf("%d", &a);
    printf("\nEnter b:");
    scanf("%d", &b);
    int sum, product, avg;
    calc(a, b, &sum, &product, &avg);
    printf("Sum is= %d Product is= %d Average is= %d", sum, product, avg);

}