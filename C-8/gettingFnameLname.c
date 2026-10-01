#include<stdio.h>

int main(){
    char firstN[]= "Abir";
    for(int i=0; i<5; i++){
        if(firstN[i]!='\0'){
            printf("%c", firstN[i]);
        }
    }

    //------------------------------//

    char AltfirstN[]= "Abir";
    for(int i=0; AltfirstN[i]!='\0'; i++){
        printf("%c", AltfirstN[i]);
    }
}