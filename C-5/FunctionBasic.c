#include<stdio.h>

void greeting1(){
    printf("Ohe ");
} void greeting2(){
    printf("Arigato");
}

int main(){
    char a;
    printf(" 'b' for BD, 'j' for jpn");
    printf("\nEnter: ");
    scanf("%c",&a);
    
    if(a=='b'){
        greeting1();
    } else if(a=='j'){
        greeting2();
    }
    return 0;
}