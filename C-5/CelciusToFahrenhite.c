#include<stdio.h>

float conversion(float c){
    float f= c*(9.0/5.0)+32;
    return f;
}

int main(){
    float c;
    printf("Enter celcius: ");
    scanf("%f", &c);

    printf("Fahrenhite: %f", conversion(c));

}

