#include <stdio.h>
int main()
{
    int character;
    printf("Enter any letter between: a-z");
    character = getchar();

    printf("The letter entered is:");
    putchar(character);
    return 0;
    

}