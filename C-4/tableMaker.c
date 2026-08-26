#include <stdio.h>

int main(){
    int NUM, num, qnum;
    printf("THE ULTIMATE TABLE MAKER\n Enter num: ");
    scanf("%d", &num);
    printf("Enter qnum: ");
    scanf("%d", &qnum);

    for(int i=qnum; i>=1; i--){
        NUM= num*i;
        printf("%d ", NUM);
    }


}