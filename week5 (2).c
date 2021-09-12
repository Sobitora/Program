#include<stdio.h>
#include<string.h>
int main(){
    char text[100];
    printf("Enter text : ");
    scanf("%s",&text);
    printf("%s",_strrev(text));
    return 0;
}