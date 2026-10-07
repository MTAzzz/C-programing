#include<stdio.h>
#include<string.h>

int main(){

    //strlen- calculates the length of a string
    char str[]= "aeio";
    int length= strlen(str);
    printf("%d\n", length);

    //strcpy- copies a string
    char tamim[100]= "tamim";
    char abir[]= "abir";
    strcpy(tamim, abir);
    printf("%s\n", tamim);

    //strcat- Concatenates (joins) strings.

    char a[100]= "labubu ";
    char b[100]= "cringe";
    strcat(a, b);
    printf("%s\n", a);

    //strcmp- compare

    char c1[]= "banana";
    char c2[]= "apple";
    printf("%d\n", strcmp(c1, c2));

    //
}