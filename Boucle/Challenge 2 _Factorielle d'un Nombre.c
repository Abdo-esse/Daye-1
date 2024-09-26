#include <stdio.h>
#include <stdlib.h>


int main()
{
   int i,s,n;


   printf("Veuillez entrer un nombre entier:");
   scanf("%d",&n);

   s=1;

   for (i=1;i<=n;i++){
    s=s*i;

   }
    printf("%d! = %d",n,s);
return 0;
}



