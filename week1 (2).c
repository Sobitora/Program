#include<stdio.h>
int main()
{
    float num[3];
    for(int i=0;i<3;i++){
        printf("Enter number%d = ",i+1);
        scanf("%f",&num[i]);
    }
    int x;
    for(int i=0;i<3;i++){
        for(;i<2 && num[i]>num[i+1];i=0){
            x=num[i];
            num[i]=num[i+1];
            num[i+1]=x;
        }
        }
    printf("%f ",num[0]);
    return 0;
}