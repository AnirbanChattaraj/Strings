//Toggle Case
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[20];

    puts("Enter your string");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }

    puts(str);

    return 0;
}