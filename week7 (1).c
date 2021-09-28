#include<stdio.h>
int main(){
    int number;
    printf("Enter number = ");
    scanf("%d",&number);
    int i,j=1,count=1;
    if(number%2==0){i=(number/2)-1;}
    else{i=number/2;}
    while(count<=number){
        for(int k=0;k<i;k++){printf("-");}
        for(int k=1;k<=(j*2)-1;k++){
            if(k==1 || k==(j*2)-1){printf("*");}
            else{printf("-");}
            }
        for(int k=0;k<i;k++){printf("-");}
        printf("\n");
        if(count<number-count){j++,i--;}
        else if(count>number-count){j--,i++;}
        count++;
    }
}