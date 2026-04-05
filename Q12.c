//12.Remove a Specific Character
#include<stdio.h>
int main(){
    char str[]="Banana";
    char a='a';
    int j=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
       if (str[i]!='a')
       {
        str[j]=str[i];
        j++;
       }
       
    }
   str[j] = '\0'; 
    printf("String after removing specific character: %s", str);
    return 0;

}