#include<stdio.h>
#include<string.h>
int main(){
    char text[100],x;
    printf("Enter text : ");
    scanf("%s",&text);
    for(int i=0;i<strlen(text)/2;i++){
        x=text[i];
        text[i]=text[strlen(text)-(i+1)];
        text[strlen(text)-(i+1)]=x;
    }
    printf("output : %s",text);
    return 0;
}