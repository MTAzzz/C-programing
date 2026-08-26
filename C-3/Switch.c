#include <stdio.h>

int main(){
    int day;
    printf("Enter day (1-7): ");
    scanf("%d", &day);

    switch(day){
        case 1: printf("Saturday \n");break;
        case 2: printf("sunday \n");break;
        case 3: printf("monday \n");break;
        case 4: printf("tuesday \n");break;
        case 5: printf("wednesday \n");break;
        case 6: printf("thursday \n");break;
        case 7: printf("friday \n");break;
        default: printf("Invalid input");
    }
}