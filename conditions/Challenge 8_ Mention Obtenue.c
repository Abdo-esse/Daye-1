#include <stdio.h>
#include <stdlib.h>

int main()
{
   float moyen;

   printf("Veuillez entrer votre moyen : ");
   scanf("%f",&moyen);

   if(moyen < 10)
           printf("Vous est recale.");

   else if( moyen >=10 && moyen<12)
           printf("Vous est  obtient la mention passable. ");

   else if (moyen>=12 && moyen<14)
           printf("Vous est  obtient la mention assez bien. ");

   else if (moyen>=14 && moyen<16)
           printf("Vous est  obtient la mention bien. ");

   else if (moyen >=16 && moyen <20)
           printf("Vous est obtient la mention très bien.  ");

   else
           printf(" Veuillez entrer votre moyen resonable ( entre 0 et 20)");

        return 0;
}
