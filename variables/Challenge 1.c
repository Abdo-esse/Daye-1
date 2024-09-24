#include <stdio.h>
#include <stdlib.h>

int main()
{
     char nom[30];
     char prenom[30];
     char adresse_email[300] ;
     char sexe[5];
     int age ;
      printf("Veuillez entrer votre informations personnelles suivant : \n");
      printf("Votre nome :");
      fgets("nom",30,stdin);
      printf("Votre prenom : \n");
      scanf("%s",&prenom);
      printf("Votre age : \n");
      scanf("%d",&age);
      printf("Votre sexe (H ou F): \n");
      scanf("%s",&sexe);
      printf("Votre adresse email :\n");
      scanf("%s",&adresse_email);








    return 0;
}
