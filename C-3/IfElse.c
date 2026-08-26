#include <stdio.h>

int main(){
    int a;
    printf("Enter marks:");
    scanf("%d", &a);

    if(a>=90){
    printf("Grade-> Golden A+\n");
    }

    else if(a<90 && a>=80){
        printf("Grade-> A+\n");
    }

    else if(a<33){
        printf("Grade-> F\n");
    }
    else {
        printf("Passed\n");
    }

    //Turnery Oparator:::::::::
    int age;
    printf("Age:");
    scanf("%d", &age);
    age>=18 ? printf("Adult") : printf("Not Adult");
    return 0;
}