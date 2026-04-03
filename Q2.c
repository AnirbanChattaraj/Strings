//String Length
#include<stdio.h>
#include<string.h>
int main(){
    char str[25];
    puts("Enter your string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    int size=0;
     for (int i = 0; str[i] != '\0'; i++)
    {
        size++;
    }
    printf("String length is:%d",size);
    return 0;
}