#include <stdio.h>

int main(){
    int a, b;
    printf("Enter your number: ");
    scanf("%d", &a);
    b= a%2;
    printf("%d", b==0);
}