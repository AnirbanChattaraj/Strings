//10.Count number of words in a string.
#include<stdio.h>
#include<string.h>
int main(){
    int count = 0;
    char str[] = "I am anirban";

    if (strlen(str) == 0) {
        printf("No of words: 0");
        return 0;
    }
    count = 1; 

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
        {
            count++;
        }
    }
    printf("No of words: %d", count);
    return 0;
}