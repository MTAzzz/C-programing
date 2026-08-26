#include <stdio.h>
#include <math.h>

int main (){
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    int a1=num %10; 
     int b1= num/10; 
    int a2=b1 %10;
     int b2= b1/10; 
    int a3=b2 %10;
     int b3= b2/10; 
    int a4=b3 %10;
     int b4= b3/10;

      int arm= pow(a1, 4)+ pow(a2, 4)+pow(a3, 4)+pow(a4, 4);
      
      printf("Armstrong Number--> %d", arm);
    
}