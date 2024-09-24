#include <stdio.h>
#include <stdlib.h>

float main()
{
    int nom;
    printf("Veuillez entrer le nombrer : ");
    scanf("%d",&nom);
     if (nom % 2 == 0)
           printf("%d est pair .\n", nom);
     else
           printf("%d est impair.\n", nom);


    return 0;
}
