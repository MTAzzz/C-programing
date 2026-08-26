#include <stdio.h>

int main(){
    char alp;
    printf("Enter alphabate: ");
    scanf("%c", &alp);

    // switch (alp){
    //     case 'a': printf("It is in lower case"); break;
    //     case 'b': printf("It is in lower case"); break;
    //     case 'c': printf("It is in lower case"); break;
    //     case 'd': printf("It is in lower case"); break;
    //     case 'e': printf("It is in lower case"); break;
    //     case 'f': printf("It is in lower case"); break;
    //     case 'g': printf("It is in lower case"); break;
    //     case 'h': printf("It is in lower case"); break;
    //     case 'i': printf("It is in lower case"); break;
    //     case 'j': printf("It is in lower case"); break;
    //     case 'k': printf("It is in lower case"); break;
    //     case 'l': printf("It is in lower case"); break;
    //     case 'm': printf("It is in lower case"); break;
    //     case 'n': printf("It is in lower case"); break;
    //     case 'o': printf("It is in lower case"); break;
    //     case 'p': printf("It is in lower case"); break;
    //     case 'q': printf("It is in lower case"); break;
    //     case 'r': printf("It is in lower case"); break;
    //     case 's': printf("It is in lower case"); break;
    //     case 't': printf("It is in lower case"); break;
    //     case 'u': printf("It is in lower case"); break;
    //     case 'v': printf("It is in lower case"); break;
    //     case 'w': printf("It is in lower case"); break;
    //     case 'x': printf("It is in lower case"); break;
    //     case 'y': printf("It is in lower case"); break;
    //     case 'z': printf("It is in lower case"); break;
    //     case 'A': printf("It is in upper case"); break;
    //     case 'B': printf("It is in upper case"); break;
    //     case 'C': printf("It is in upper case"); break;
    //     case 'D': printf("It is in upper case"); break;
    //     case 'E': printf("It is in upper case"); break;
    //     case 'F': printf("It is in upper case"); break;
    //     case 'G': printf("It is in upper case"); break;
    //     case 'H': printf("It is in upper case"); break;
    //     case 'I': printf("It is in upper case"); break;
    //     case 'J': printf("It is in upper case"); break;
    //     case 'K': printf("It is in upper case"); break;
    //     case 'L': printf("It is in upper case"); break;
    //     case 'M': printf("It is in upper case"); break;
    //     case 'N': printf("It is in upper case"); break;
    //     case 'O': printf("It is in upper case"); break;
    //     case 'P': printf("It is in upper case"); break;
    //     case 'Q': printf("It is in upper case"); break;
    //     case 'R': printf("It is in upper case"); break;
    //     case 'S': printf("It is in upper case"); break;
    //     case 'T': printf("It is in upper case"); break;
    //     case 'U': printf("It is in upper case"); break;
    //     case 'V': printf("It is in upper case"); break;
    //     case 'W': printf("It is in upper case"); break;
    //     case 'X': printf("It is in upper case"); break;
    //     case 'Y': printf("It is in upper case"); break;
    //     case 'Z': printf("It is in upper case"); break;

    // }
    if (alp>= 'a' && alp<='z'){
        printf("Lower Case");
    } else if(alp>='A' && alp<= 'Z'){
        printf("Upper Case");
    } else{
        printf("Invalid");
    }
}