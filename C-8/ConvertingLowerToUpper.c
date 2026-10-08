#include<stdio.h>

void convert(char str[]){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            str[i]= str[i]-32;
        }
    }
    puts(str);
}

int main(){
    char str[100];
    printf("Enter Your line: ");
    fgets(str, 100, stdin);

    convert(str);
}