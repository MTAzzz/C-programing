#include<stdio.h>

int main(){
    int row;
    int colum;
    char symbol;

    printf("Enter Row: ");
    scanf("%d", &row);
    printf("Enter Colum: ");
    scanf("%d", &colum);
    printf("Enter Character: ");
    scanf(" %c", &symbol);

    for(int i=1; i<=row; i++){
        for(int j=1; j<=colum; j++){
            printf("%c", symbol);
        }
        printf("\n");
    }
   
}