#include<stdio.h>
// return by value:


// int random(int n){
//     n= n*n;
//     return n;
// }

// int main(){
//     int n= 5;
//     printf("%d", random(n));
// }


//return by reference/ pointeres:

void rev(int *n){
    *n= (*n)*(*n);
}

int main(){
    int number =4;
    rev(&number);
    printf("%d", number);
}
