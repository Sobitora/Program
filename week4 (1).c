#include<stdio.h>
int main(){
    int number[10];
    for(int i=0;i<10;i++){
        printf("Enter number%d = ",i+1);
        scanf("%d",&number[i]);
    }
    printf("Result : ");
    for(int i=1;i<9;i++){
        if(number[i-1]%2==1 && number[i+1]%2==1){
            printf("%d ",number[i]);
        }
    }
}