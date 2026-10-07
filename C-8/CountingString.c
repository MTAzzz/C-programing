#include<stdio.h>

int counting(char name[100]){
    int count= 0;
    for(int i=0; name[i]!='\0' && name[i]!= '\n'; i++){
        if(name[i]!= ' '){
            count++;
        }
    }
    return count;
}

int main(){
    
    printf("Enter your name: ");
    char name[100];
    fgets(name, 100, stdin);

    counting(name);

    printf("There are %d characters in your string", counting(name));

}

