#include<stdio.h>
int main()
{
    float num[3];
    for(int i=0;i<3;i++){
        printf("Enter number%d = ",i+1);
        scanf("%f",&num[i]);
    }
    if(num[0]<num[1] && num[0]<num[2]){
        printf("min = %f",num[0]);
    }
    else if(num[1]<num[0] && num[1]<num[2]){
        printf("min = %f",num[1]);
    }
    else if(num[2]<num[0] && num[2]<num[1]){
        printf("min = %f",num[2]);
    }
    return 0;
}