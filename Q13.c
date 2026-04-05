//Replace Character
#include<stdio.h>
int main(){
    char str[]="Banana";
    char a='a';
    int j=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
       if (str[i]=='a')
       {
        str[i]='c';

       }
       
    }
   
    printf("String after replacing specific character: %s", str);
    return 0;
}