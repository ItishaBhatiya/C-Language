#include <stdio.h>

int main()
{
    char str[20], *ptr;
    int name = 0;
    
    printf("Enter any string: ");
    gets(str);
    
    ptr = str;
    
    while (*ptr != '\0')
    {
        name++;
        ptr++;
    }
    printf("\nThe length of the string is: %d\n", name);
    
}


