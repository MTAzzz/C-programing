#include<stdio.h>

float percentage(float b, float e, float m){
    float p= ((b+e+m)/300)*100;
    return p;
}

int main(){
    float b, e, m; 
    printf("Enter your marks of Bangla, English, Math below \n");
    printf("Bangla: ");
    scanf("%f", &b);
    printf("\nEnglish: ");
    scanf("%f", &e);
    printf("\nMath: ");
    scanf("%f", &m);

    printf("Percentage of these 3 subjects is: %f", percentage(b, e, m));
}