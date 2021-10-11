#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char *morse[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    char AtoZ[]="abcdefghijklmnopqrstuvwxyz";
    char text[100];
    printf("input text : ");
    scanf("%s",text);
    for(int i=0;i<strlen(text);i++)
    {
        text[i]=tolower(text[i]);
        for(int j=0;j<strlen(AtoZ);j++)
        {
            if(text[i]==AtoZ[j])
            {
                printf("%s ",morse[j]);
            }
        }
    }
    return 0;
}