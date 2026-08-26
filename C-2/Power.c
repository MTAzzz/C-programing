#include <stdio.h>
#include <math.h>

int main(){

    int a, b;
    printf("Enter your value");
    scanf("%d", &a);
    printf("enter another value:");
    scanf("%d", &b);

    int c= pow(a,b);
    printf("First value^second value: %d", c);
    return 0;
}