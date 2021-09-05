#include<stdio.h>
int main(){
    int number[10],position[10],count=0;
    for(int i=0;i<10;i++){
        printf("Enter number%d = ",i+1);
        scanf("%d",&number[i]);
        if(number[i]%2==1){position[count++]=i;}
    }
    printf("Result : ");
    for(int i=0;i<count;i++){
        if(position[i+1]-position[i]==1){
            if(position[i+2]-position[i]==2){printf("%d ",number[position[i]+1]);}}
        if(position[i+1]-position[i]==2){printf("%d ",number[position[i]+1]);}
    }
    return 0;
}