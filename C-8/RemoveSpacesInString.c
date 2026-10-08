#include<stdio.h>

void removeSpace(char str[]){
    char strN[100];
    
    int j=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]!= ' '){
            strN[j]= str[i];
            j++;
        }
    }

    strN[j]= '\0';

    puts(strN);
}

int main(){
    char str[100];
    printf("Enter a line: ");
    fgets(str, 100, stdin);

    removeSpace(str);
}




