//Palindrome Check
#include<stdio.h>
int main(){
    char str[] = "Anirban";
    int size = 0;
    int flag = 1;  
    for (int i = 0; str[i] != '\0'; i++)
    {
        size++;
    }
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("It is a palindrome");
    else
        printf("It is not a palindrome");

    return 0;
}