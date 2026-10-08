#include<stdio.h>

void check(char str[100], char c){
    int count=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==c){
            count= 1;
        }
    }
    if (count== 1){
        printf("Yes it is present");
    }
}

int main(){
    char str[100], c;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character to check: ");
    scanf(" %c", &c); //always put a space before %c

    check(str, c);
}