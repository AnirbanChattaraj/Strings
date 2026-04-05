//14.Find First Non-Repeating Character
#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Apple";
    for (int i = 0; i < strlen(str); i++)
    {
        int flag = 0;  
        for (int j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                flag = 1;
                break;
            }
        }
        for (int j = i + 1; j < strlen(str); j++)
        {
            if (str[i] == str[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("First non repeating character: %c", str[i]);
            break;
        }
    }
    return 0;
}