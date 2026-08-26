#include <stdio.h>
#include <math.h>

void Squire(int l){
    int ll= pow(l, 2);
    printf("Area of Squire:%d", ll);
}
void Circle(float r){
    float rr= pow(r, 2);
    printf("Area of circle: %f", (3.1416)*rr);
}
void Rectangle(int l, int w){
    printf("Area of Rectangle: %d", l*w);
}


int main(){
    int l, w;
    float r;
    char x;
    printf("'s' for Squire, 'c' for Circle, 'R' for Rectangle: ");
    scanf("%c", &x);
    if (x=='s'){
        printf("\nLength: ");
        scanf("%d", &l);
        Squire(l);
    }
    else if (x=='c'){
        printf("\nRadius: ");
        scanf("%f", &r);
        Circle(r);
    }
    else if (x=='r'){
        printf("\nLength: ");
        scanf("%d", &l);
        printf("\nwidth: ");
        scanf("%d", &w);
        Rectangle(l, w);
    }

    return 0;
}