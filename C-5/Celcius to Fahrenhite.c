#include<stdio.h>

int conversion(int c){
    int f= c*(9/5)+32;
    return f;
}

int main(){
    int c;
    printf("Enter celcius: ");
    scanf("%d", &c);

    printf("Fahrenhite: %d", conversion(c));

}

