#include<stdio.h>
#include<string.h>

void slice(char str[], int n, int m){
    char newStr[200];
    int j=0;
    for(int i=n; i<=m; i++, j++ ){
        newStr[j]=str[i];
    }
    newStr[j]='\0';
    puts(newStr);
}

int main(){
    char str[100];
    int n, m;
    printf("Enter your string without space: ");
    scanf("%s", str);
    printf("\nEnter n: ");
    scanf("%d", &n);
    printf("\nEnter m: ");
    scanf("%d", &m);

    slice(str, n, m);

}