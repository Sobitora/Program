#include<stdio.h>
int main(){
    int number,x,a=0;
    printf("Enter number = ");
    scanf("%d",&number);
    x=number;
    if(number!=999){
    printf("Enter number = ");
    scanf("%d",&number);
    }
    if(x>number && number!=999){
        while(number!=999){
            x=number;
            printf("Enter number = ");
            scanf("%d",&number);
            if(x<number && number!=999){
                a=1;
            }
        }
    }
    else if(x<number && number!=999){
        while(number!=999){
            x=number;
            printf("Enter number = ");
            scanf("%d",&number);
            if(x>number && number!=999){
                a=1;
            }
        }
    }
    if(a==0){printf("YES");}
    else{printf("NO");}
    return 0;
}