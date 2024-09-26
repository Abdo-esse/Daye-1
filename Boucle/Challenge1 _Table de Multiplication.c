#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,n,m;

  printf("Veuillez entrer un nombre: ");
  scanf("%d",&n);

  for (i=0;i<=10;i++){

      m=n*i;
      printf("%d* %d = %d \n",n,i,m);
  }

    return 0;
}
