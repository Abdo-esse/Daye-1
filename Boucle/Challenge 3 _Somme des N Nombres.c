#include <stdio.h>
#include <stdlib.h>


int main()
{
   int i,s,n;


   printf(" Veuillez entrer un nombre entier:");
   scanf("%d",&n);

   s=0;

   for (i=0;i<=n;i++){
    s=s+i;

   }
    printf("la somme des %d premiers nombres naturels = %d",n,s);
return 0;
}



