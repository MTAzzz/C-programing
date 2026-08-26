#include<stdio.h>
    
void birthday(char name[], int age){
    printf("\nHappy Birthday!");
    printf("\nHappy Birthday to you");
    printf("\nHappy Birthdayy dear %s", name);
    printf("\nHappy Birthday to you");
    printf("\nYour current age: %d", age);
}
int main(){
    char name[]= "Abir";
    int age= 17;
    birthday(name, age); /*lets assume first bracket is a telephone. we want to call name, age into
    birthday function. or in simple terms, we want to use name and age in our birthday function.
    but as we know function cannot access other function's information so main function's value of 
    name and age is inaccessible in birthday function. we can call the function just by typing: 
    birthday(); but if we want to send information of main function to birthday function, for 
    example here we want to send name and age. we need to type that in the telephone/ ()  to send.
    but there is a catch, the birthday function cannot recieve a random information, it needs to
    know what type of information he is getting, so we declare: char [any type of name, but here 
    we used same name], int [again, name can be changed but the info he is getting is always age]
    
    more proffessionally, what we type in birthday();'s first bracket is called argument. and 
    who recieves it void birthday(){} here the first bracket is a perameter*/
    
    
    return 0;
}