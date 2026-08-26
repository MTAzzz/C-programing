#include<stdio.h>

int sum(int n){
    if(n==1){
        return 1;
    }
    int sum1= sum(n-1)+n;
    // int sum2= sum1+n;
    return sum1;
}

int main(){
    int n;
    printf("Enter: ");
    scanf("%d", &n);

    sum(n);

    printf("%d", sum(n));
}