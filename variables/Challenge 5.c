#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    printf("Velliez entrer la température de l'eau en Celsius : ");
    scanf("%f",&c);
    if (c < 0){
        printf("L'etat de l'eau est solide");
    }

    else if (c>=0 && c<100){
        printf("L'etat de l'eau est liquide");
    }

    else {
        printf("L'etat de l'eau est gaz");
    }







    return 0;
}
