#include <stdio.h>

int main (){
    int a, b, c;
    printf("Enter number");
    scanf("%d", &a);
    printf("Enter number");
    scanf("%d", &b);
    printf("Enter number");
    scanf("%d", &c);

    printf("%d", (a<b) && (a<c));
}