#include<stdio.h>

void reverse(int n, int arr[]){
    for(int i=0; i<n/2; i++){
        int fv= arr[n-i-1];
        int lv= arr[i];
        arr[i]= fv;
        arr[n-i-1]= lv;
    }
    for(int i=0; i<n; i++){
        printf(" %d", arr[i]);
    }
}

int main(){
    int n;
    
    printf("Enter how many numbers you want to enter: ");
    scanf("%d", &n);
    printf("\nEnter The NUMBERS: ");
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    reverse(n, arr);
}