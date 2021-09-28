#include<stdio.h>
int main()
{
    int number,x,count=0,pattern=0;
    printf("Enter number : ");
    scanf("%d",&number);
    if(number%2==0){x=number-1;}
    else{x=number;}
    for(int i=0;i<number;i++){
        for(int j=1;j<=x;j++)
        {
            if(j==((x/2)+1)-count || j==((x/2)+1)+count)
            {
            printf("*");
            }
            else{printf("-");}
        }
        pattern++;
        if(number%2==0){
            if(pattern<number/2){
                count++;
            }
            else if(pattern>number/2){
                count--;
            }
        }
        else{
            if(pattern<=(number/2)){
                count++;
            }
            else if(pattern>(number/2)){
                count--;
            }
        }
        printf("\n");
    }
    return 0;
}