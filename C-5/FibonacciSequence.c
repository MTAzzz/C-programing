#include<stdio.h>

int F(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }

    int fz= F(n-1);
    int fzz= F(n-2);
    int fs= fz+fzz;
    return fs;
    // return F(n-1)+F(n-2);
    
}

void print(int n){
    if(n<0 ){
        return;
    }
    
    print(n-1);
    printf("%d ", F(n));
    
}

int main(){
    
    print(6);
}