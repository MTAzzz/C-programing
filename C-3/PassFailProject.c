#include <stdio.h>

int main(){
    int num;
    printf("Enter Marks: ");
    scanf("%d", &num);

    if(num>=30 && num<=100){
        printf("Passed \n");
    } else if(num>100){
        printf("Invalid input \n");
    } else {
        printf("Failed");
    }
}