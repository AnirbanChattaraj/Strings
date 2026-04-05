//11.Remove Spaces
#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "I am Anirban";
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0'; 
    printf("String without spaces: %s", str);
    return 0;
}