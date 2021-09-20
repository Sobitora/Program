#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char code[200],bit[8],x;
    int number=0;
    printf("Enter code : ");
    scanf("%s",&code);
    for(int i=0,j=0;i<strlen(code);i++){
        bit[j]=code[i];
        number+=(bit[j]-'0')*pow(2,7-j);
        j++;
        if(j-1==7){
            x=number;
            printf("%c",x);
            j=0;
            number=0;
            }
        
    }
    return 0;
}