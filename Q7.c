// String Compare
#include <stdio.h>
#include <string.h>
int main()
{
    char Str1[] = "Anirban";
    char Str2[] = "Rick";
    int cmp = strcmp(Str1, Str2);
    if (cmp > 0)
    {
        printf("%s is greater than %s\n", Str1, Str2);
    }
    else if (cmp < 0)
    {
        printf("%s is greater than %s\n", Str2, Str1);
    }
    else
    {
        printf("%s is equal to %s\n", Str1, Str2);
    }
    return 0;
}