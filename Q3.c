// Count Characters
// Count number of:
// vowels
// consonants
// digits
// spaces
#include <stdio.h>
#include <string.h>

int main()
{
    char str[25];
    puts("Enter your string:");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int v = 0, c = 0, d = 0, s = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')  
        {
            d++;
        }
        else if (str[i] == ' ')  
        {
            s++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || 
                 (str[i] >= 'A' && str[i] <= 'Z'))  // alphabets
        {
            if (str[i] == 'a' || str[i] == 'A' ||
                str[i] == 'e' || str[i] == 'E' ||
                str[i] == 'i' || str[i] == 'I' ||
                str[i] == 'o' || str[i] == 'O' ||
                str[i] == 'u' || str[i] == 'U')
            {
                v++;  
            }
            else
            {
                c++;  
            }
        }

        i++;  
    }

    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
    printf("Spaces: %d\n", s);
    printf("Digits: %d\n", d);

    return 0;
}