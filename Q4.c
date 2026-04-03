//4. Reverse a String
#include<stdio.h>
int main(){
    char str[] = "Anirban";
    int size = 0;
    char temp;
    for (int i = 0; str[i] != '\0'; i++)
    {
        size++;
    }
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("The reverse is: %s", str);
    return 0;
}