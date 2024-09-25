#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  char c ;

   printf("veuillez entrer le caractere :");
   scanf("%c",&c);


   if (c >= 'A' && c <= 'Z')
     printf("le caractère donne est un alphabet majuscule ");


   else
   printf("le caractère donne est un alphabet minuscul ");

    return 0;
}
