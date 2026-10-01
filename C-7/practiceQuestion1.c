#include<stdio.h>

int main(){
    int prize[3];
    printf("Enter the prize of first item: ");
    scanf("%d", &prize[0]);
    printf("Enter the prize of second item: ");
    scanf("%d", &prize[1]);
    printf("Enter the prize of third item: ");
    scanf("%d", &prize[2]);

    printf("first item, %f", prize[0]+(prize[0]*0.18));
    printf("\nsecond item, %f", prize[1]+(prize[1]*0.18));
    printf("\nthird item, %f", prize[2]+(prize[2]*0.18));
}