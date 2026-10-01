#include<stdio.h>

int main(){
    int n;
    printf("Enter how many fibonacci number you want: ");
    scanf("%d", &n);
    int fib[n];

    fib[0]=0;
    fib[1]=1;
    printf("%d", fib[0]);
    printf("\t%d", fib[1]);

    for(int i=2; i<n; i++){
        fib[i]= fib[i-1]+fib[i-2];
        printf("\t%d", fib[i]);
    }
}