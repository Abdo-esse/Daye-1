#include <stdio.h>
#include <stdlib.h>



int main()
{
   int a,c,m,j,h,min,sec;


   printf("veuillea entrer le nombre des annee : ");
   scanf("%d",&a);
   printf("Comment peu covurtir cette annee :\n 1=>mois\n 2=>jours\n 3=>Heurs\n 4=>minutes\n 5=> seconde \n ");
   scanf("%d",&c);

   j = a *365 ;
   m = a * 12;
   h = j * 24;
   min = h * 60;
   sec = min * 60;

  switch (c){
    case 1:
        printf("%d anne en mois est:%d mois\n",a,m);
        break;
    case 2:
        printf("%d en annee jour est:%d jours\n",a,j);
        break;
    case 3:
        printf("%d en annee heur est:%d heurs\n",a,h);
        break;
    case 4:
        printf("%d en annee minutes est:%d minutes\n",a,min);
        break;
    case 5 :
        printf("%d en annee secomd est:%d secondes\n",a,sec);
        break;
    default:
        printf("Veuillez entrer entre:\n 1 pour les mois.\n 2 pour les jour.\n 3 pour les heurs.\n 4 pour les minutes.\n 5 pour les seconde ");
        break;



}



    return 0;
}
