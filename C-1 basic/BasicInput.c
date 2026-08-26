#include <stdio.h>

int main() {
    int a, b, c, d;
    
    printf("Enter first number");
    scanf("%d", &a);

    printf("Enter second number");
    scanf("%d", &b);

    printf("Enter third number");
    scanf("%d", &c);

    printf("Enter your string:");
    scanf("%s", &d);

    printf("Here is your sum: %d \n", a+b+c);
    printf("Here is your string: %d", d);
    return 0;
}