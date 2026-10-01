#include<stdio.h>

int main(){
    int num[5];

    printf("Enter numbers: \n");
    for(int i=0; i<5; i++){
        scanf("%d", &num[i]);
    }
    
    for(int j=0; j<5; j++){
        if(num[j]==69){
            printf("Matched number; 69 you freaky ");
        }
    }
}