#include<stdio.h>

void countdown(int n){
    if(n==1){
        printf("%d", n);
        return;
    }
    
    printf("%d", n);
    countdown(n-1);

}

void countup(int n){
    if(n==1){
        printf("%d", n);
        return;
    }
       
    countup(n-1);
    printf("%d", n);
}

int main(){
    int n;
    char cm, cd, cu;
    printf("CountDown or CountUP? d for down, u for up: ");
    scanf("%c", &cm);
    if (cm=='d'){
        printf("Enter your number: ");
        scanf("%d", &n);
        countdown(n);
    } else if(cm=='u'){
        printf("Enter your number: ");
        scanf("%d", &n);
        countup(n);
    }



}