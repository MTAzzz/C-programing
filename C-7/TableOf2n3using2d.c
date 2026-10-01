#include<stdio.h>

int main(){
    int two;
    int three;

    int table[2][10];
    
    for(int i=0; i<10; i++){
        table[0][i]= 2*(i+1);
        printf("\t%d", table[0][i]);
    }
        printf("\n");
    for(int i=0; i<10; i++){
        table[1][i]= 3*(i+1);
        printf("\t%d", table[1][i]);
    }


    //Extra note; if using function, 2d arrays parameters need the second dimansion's value such
    // as table[][10]
}