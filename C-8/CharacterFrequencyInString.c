#include<stdio.h>

void freq(char str[]){
    int count;
    int maxCount=0;
    char mostFreq;

    for(int i=0; str[i]!='\0'; i++){
        count= 0;
        for(int j=0; str[j]!= '\0'; j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count > maxCount){
            maxCount=count;
            mostFreq=str[i];
        }

    }

    printf("Most frequent character is ' %c ' and it occured %d times", mostFreq, maxCount );
}

int main(){
    char str[100];
    printf("Enter a line: ");
    fgets(str, 100, stdin);

    freq(str);
}


