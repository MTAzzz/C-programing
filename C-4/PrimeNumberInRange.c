#include <stdio.h>

int main(){
    int start;
    int end;

    printf("Enter Starting point:");
    scanf("%d", &start);
    printf("Enter Ending point:");
    scanf("%d", &end);

    for(int i=start; i<=end; i++){
        int prime=1;

        for(int j=2; j<i; j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime==1){
            printf("%d ", i);
        }
    }
}