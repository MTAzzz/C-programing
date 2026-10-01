#include<stdio.h>

void odd(int arr[]){
    for(int i=0; i<8; i++){
        if(arr[i]%2!=0){
            printf("\n%d Odd", arr[i]);
        } 
    }
}

int main(){

    int arr[]={1,2,3,4,5,6,7,8};
    odd(arr);

}