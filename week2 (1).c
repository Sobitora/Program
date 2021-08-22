#include<stdio.h>
int main()
{
    int number;
    int a,b,c;
    printf("Enter number : ");
    scanf("%d",&number);
       while(a!=0 || b!=0 && number!=0){
        a=number/100;
        b=(number%100)/10;
        c=number%10;
        number=a*b*c;
        printf("%d.%d.%d = %d\n",a,b,c,number);
        }
    return 0;
}