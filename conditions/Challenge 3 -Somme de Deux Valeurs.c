#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,s;
   printf("Veuillez entrer le premier nombre : ");
   scanf("%d",&a);
    printf("Veuillez entrer le DEUX nombre : ");
   scanf("%d",&b);

   if(a==b){
        s=(a+b)*3;

    printf("%d",s);
    }
    else {
        s=a+b;
    printf("%d",s);
    }


    return 0;
}
