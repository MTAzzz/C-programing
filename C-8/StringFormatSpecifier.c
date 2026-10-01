#include<stdio.h>

int main(){
    char name[60];
    printf("Enter name: ");
    scanf("%s", name); /*& is not used here because name is a char array which is also a 
                        pointer so no need to use & */

    printf("\nyour name is: %s", name);
}   