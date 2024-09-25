#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,m,j,h,min,sec;

   printf("veuillea entrer le nombre des annee : ");
   scanf("%d",&a);


   j = a *365 ;
   m = a * 12;
   h = j * 24;
   min = h * 60;
   sec = min * 60;


   printf("%d anne en mois est:%d mois\n",a,m);
   printf("%d en annee jour est:%d jours\n",a,j);
   printf("%d en annee heur est:%d heurs\n",a,h);
   printf("%d en annee minutes est:%d minutes\n",a,min);
   printf("%d en annee secomd est:%d secondes\n",a,sec);




    return 0;
}
