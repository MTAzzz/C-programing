#include<stdio.h>
#include<string.h>

//input using %c

int main(){
    char str[100];
    char input;
    for(int i=0; i<100; i++){
        scanf("%c", &str[i]);
        if(str[i]==' '){
            str[i]='\0';
            break;
        }
    }
}

