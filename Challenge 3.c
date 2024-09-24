#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d,D;
    printf(" Conversion de la distance de Km en Yards .");
    printf("Veuillez la destance en Km : ");
    scanf("%f",&d);
    D = d* 1093.61 ;
    printf("La destance en Yards est : %f",D);



    return 0;
}
