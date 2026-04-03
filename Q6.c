//String Copy (Manual)
#include<stdio.h>
int main(){
   char str[]="Anirban";
   char str1[20];
   int i;
   for ( i = 0; str[i]!='\0'; i++)
   {
    str1[i]=str[i];
   }
   str1[i] = '\0';
   printf("%s",str1);
    return 0;
}