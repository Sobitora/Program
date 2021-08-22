#include<stdio.h>
#include<string.h>
int main()
{
    char s[3];
    int result;
    printf("Enter number = ");
    scanf("%s",&s);
    do{
        result=1;
        for(int i=0;i<strlen(s)-1;i++){
        printf("%c ",s[i]);
        result *= s[i]-'0'; 
    }
    printf("= %d\n",result);
    sprintf(s, "%03d",result);
    }
    while(result>=10);
    return 0;
}