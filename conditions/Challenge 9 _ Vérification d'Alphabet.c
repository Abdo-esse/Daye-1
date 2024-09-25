#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;

    printf("Veuillez enrer un caractere : ");
    scanf("%c",&c);

    if ((c >= 'A' && c <= 'Z')||(c >= 'a' && c <= 'z'))
        printf("Cette caracter est un alphabet.");


    else
       printf("Cette caracter n'est pas d'un alphabet./n");


     if (c >= 'a' && c <= 'z')
        printf("Cet alphabet est minuscule.");

     else
        printf("Cet alphabet est majuscule.");

    return 0;
}
