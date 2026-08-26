#include <stdio.h>
#include <math.h>

int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    if(num>0){
        printf("the number is a natural number");
    } else {
        printf("It is an unnatural number");
    }
}