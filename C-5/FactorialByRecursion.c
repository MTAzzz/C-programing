#include<stdio.h>

int factorial(int num){
    if(num==1 || num==0){
        return 1;
    } else{
        return (num* factorial(num-1));
    }
}

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    int x= factorial(num);
    printf("\nYour factorial is: %d", x);
}