#include <stdio.h>

void Table(int n){
    for(int i=1; i<=10; i++){
        printf("%d\n", i*n);
    }

}

int main(){
    int n;
    printf("Enter the number you want the table for: ");
    scanf("%d", &n);

    Table(n);

}