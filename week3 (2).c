#include<stdio.h>
int main(){
    int number,x;
    printf("Enter number = ");
    scanf("%d",&number);
    x=number*number;
    for(int i=0;i<x;i++){
        if(i%number==0 && i!=0){printf("\n");}
        printf("*");
    }
    return 0;
}