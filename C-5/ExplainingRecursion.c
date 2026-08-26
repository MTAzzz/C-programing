#include<stdio.h>

void hw(int num){ //recieves num's value
    if(num<=1){ /*checks the condition of if, which is correct until its 1 or less then 1, if it
                becomes 1 or less then 1 it will return, but void function returns nothing so 
                it just exists the function. */
        return;
    }
    printf("Hello World\n"); //if condition is right then this operation is done
    hw(num-1); /*calls himself, and also here its written as num-1 which means if the value is lets
    say 5, it will become 4, then starts from the beginning of hw function as it called himself so
    it starts again, similer to loop. checks condition if right perfomrms the rest of the code, if 
    not it return nothing/ exists the code*/
    
}
// the code starts from main function
int main(){
    int num=5;
    hw(num); //calls hw function while also sending the value of num which is 5 to hw function
    
}