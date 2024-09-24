#include <stdio.h>
#include <stdlib.h>

int main()
{
     float c ,k;
    printf("Veuillez entrer la temperature en c : ");
    scanf("%f",&c);
    k= c + 273.15;
    printf("la temperatur en Kelvin : %f K",k);


    return 0;
}
