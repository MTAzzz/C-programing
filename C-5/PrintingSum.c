#include<stdio.h>

int sum(int a, int b){
    printf("Sum= %d", a+b);
}

int main(){
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);

    sum(a, b);
}

