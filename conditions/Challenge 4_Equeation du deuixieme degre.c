#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   float a,b,c,delta,x0,x1,x2;

   printf("Votre equation s'ecrit sous la forme ax²+ bx+c=0\n");


   printf("Veuillez entrer a :");
   scanf("%f",&a);

    printf("Veuillez entrer b :");
   scanf("%f",&b);

    printf("Veuillez entrer c:");
   scanf("%f",&c);

   delta=pow(-b,2)-(4*a*c);


        if (delta>0){
             x1=(-b-sqrt(delta))/(2*a);
             x2=(-b+sqrt(delta))/(2*a);
             printf("les solutions de cette equation est : %.2f et %.2f",x1,x2);
        }

        else if (delta==0) {
            x0=(-b)/(2*a);
             printf("le solution de cette equation est : %.2f ",x0);
        }

        else
             printf("N'est pas de solution");





    return 0;
}
