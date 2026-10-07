#include<stdio.h>
#include<string.h>

void salting(char pass[]){
    char salt[]= "123";
    char newpass[200];
    strcpy(newpass, pass); 
    strcat(newpass, salt);
    puts(newpass);

}

int main(){
    char pass[100];
    printf("Enter your password: ");
    scanf("%s", pass); //& not needed   we could have used fgets() if we needed spaces as well
    salting(pass);
}