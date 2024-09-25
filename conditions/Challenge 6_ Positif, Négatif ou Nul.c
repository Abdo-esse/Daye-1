#include <stdio.h>
#include <stdlib.h>

int main()
{
   float nombre;
   printf("veuillez entrer le nombre : ");
   scanf("%f",&nombre);
   if(nombre < 0)
    printf(" Le nombre est negatife .");
  else if(nombre > 0)
    printf(" Le nombre est positive .");
  else
      printf(" Le nombre est nul .");





        return 0;
}
