#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  char c ;

   printf("veuillez entrer le caractere :");
   scanf("%c",&c);


   if (c >= 65 && c <= 90)
     printf("le caractère donne est un alphabet majuscule ");


   else
   printf("le caractère donne est un alphabet minuscul ");

    return 0;
}
