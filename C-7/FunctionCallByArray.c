#include<stdio.h>

void function(int array[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", array[i]);
    }
}
        //for notes, check "Array, Pointer Arithmatics"- ChatGPT
int main(){
    
    int array[]= {1,2,3,4,5};
    function(array, 5);       
}

        //----------------------------------------------//

//alternatives:

// void function(int *array, int n){
//     for(int i=0; i<n; i++){
//         printf("%d ", array[i]);
//     }
// }

// int main(){
    
//     int array[]= {1,2,3,4,5};
//     function(array, 5);       
// }



        //----------------------------------------------//

// void function(int *array, int n){
//     for(int i=0; i<n; i++){
//         printf("%d ", *(array+i));
//     }
// }

// int main(){
    
//     int array[]= {1,2,3,4,5};
//     function(array, 5);       
// }

