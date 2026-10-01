#include<stdio.h>

int main(){
    int num[5];
    printf("Largest Number Finder 5100 hexa\n");
    printf("Enter Numbers --\n");
    for(int j=0; j<5; j++){
        scanf("%d", &num[j]);
    }
    int largest= num[0];

    for(int i=1; i<5; i++){
        if(num[i]>largest){
            largest=num[i];
        }
    }
    printf("Largest number is: %d", largest);
}