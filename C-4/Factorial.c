#include<stdio.h>

int main(){
    int n;
    int N=1;
    printf("Enter number for factorial: ");
    scanf("%d", &n);
    for(int i=n; i>=1; i--){
        N=N*i;

    } printf("%d", N);
}