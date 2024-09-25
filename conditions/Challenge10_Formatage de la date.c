#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int j,m,a;
  printf("veuillez entrer la date sous la forme jj/mm/aa =>   ");
  scanf("%d %d %d",&j,&m,&a);
  switch(m){
       case 1:
               printf("%d-Janvier-%d",j,a);
               break ;
      case 2:
               printf("%d-Fevrier-%d",j,a);
               break ;
      case 3:
               printf("%d-Mars-%d",j,a);
               break;
      case 4:
               printf("%d-Avril-%d",j,a);
               break ;
      case 5:
               printf("%d-Mai-%d",j,a);
               break ;
      case 6:
               printf("%d-Juin-%d",j,a);
               break ;
      case 7:
               printf("%d-Juillet-%d",j,a);
               break ;
      case 8:
               printf("%d-Aout-%d",j,a);
               break ;
      case 9:
               printf("%d-Septembre-%d",j,a);
               break ;
      case 10:
               printf("%d-Octobre-%d",j,a);
               break ;
      case 11:
               printf("%d-Novembre-%d",j,a);
               break ;
      case 12:
               printf("%d-Decembre-%d",j,a);
               break ;
      default :
               printf("Veuillez entrer le mois enter 1 et12");
            break ;




  }
    return 0;
}
