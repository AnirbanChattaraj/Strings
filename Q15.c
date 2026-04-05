//Perform simple compression:
//"aaabbc" → "a3b2c1"
#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "aaabbc";
    for (int i = 0; i < strlen(str); i++)
    {
        int count = 1;
        while (str[i] == str[i+1])
        {
            count++;
            i++;  
        }
        printf("%c%d", str[i], count);
    }
    return 0;
}