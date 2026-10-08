#include<stdio.h>

int vowel(char str[], int count){
    for(int i=0; str[i]!= '\0'; i++){
        // if(str[i]== 'a' || 'e' || 'i'|| 'o'||'u'|| 'A'||'E' || 'I'|| 'O' || 'U'){
        //     count++;
        // }

        // this doesn't work, have to use str[i]== 'a' every sing time. look below

        if(str[i]== 'a' || str[i]== 'e' || str[i]== 'i' || str[i]== 'o' || str[i]== 'u'){
            count++;
        }

    }
    return count; 
}

int main(){
    char str[100];
    printf("Write a string: ");
    scanf("%s", str);

    int count = 0;

    printf("Amount of vowels in your strings: ");
    printf("%d", vowel(str, count));

}