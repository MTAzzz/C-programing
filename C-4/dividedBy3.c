#include <stdio.h>

int main(){
    // for(int i=1; i<=30; i++){
        
    //     if(i/3==for(int j=1; j>=1; j++)){
    //         printf("%d", i);
    //     }
    // }
    int n;
    printf("Enter: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(i%3!=0){
            printf("%d ",i);
        }
    }
    
}
