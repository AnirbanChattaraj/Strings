//Input & Output
#include<stdio.h>
#include<string.h>
int main(){
    char str[25];
    puts("Enter your string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    puts(str);
    return 0;
}