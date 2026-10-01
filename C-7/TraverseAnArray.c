#include<stdio.h>

int main(){
    int n;
    int array[5];
    int *ptr= &array[0];

    //input

    for(int i=0; i<5; i++){
        printf("%d index: ", i);
        scanf("%d", (ptr+i));
    }

    //output

    for(int i=0; i<5; i++){
        printf("\n%d OutIndex: %d", i, *(ptr+i));
    }

        //---------------------------------------------//
    //alternative

    // for(int i=0; i<5; i++){
    //     printf("%d index: ", i);
    //     scanf("%d", &array[i]);
    // }

    // //output

    // for(int i=0; i<5; i++){
    //     printf("\n%d OutIndex: %d", i, array[i]);
    // }
}