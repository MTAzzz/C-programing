#include <stdio.h>

int main(){

    float a, b;
    printf("Enter a:");
    scanf("%f", &a);
/*
ALWAYS USE ''&'' (ADRASS) IN scanf
*/
    printf("Enter b:");
    scanf("%f", &b);

    printf("The area of triangle is: %.2f", 0.5* a* b);

    return 0;

}