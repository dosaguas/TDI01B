#include <stdio.h>
#include <stdlib.h>

int nombrejours(int mois, int annee)
{
    switch (mois)
    {
           case 1:
           case 3:
           case 5:
           case 7:
           case 8:
           case 10:
           case 12:
                return 31;
                break;
           case 2:
                if (annee%4==0)
                   return 29;
                else
                   return 28;
           default:
                   return 30;
                   
    }
}


int main(void)
{
    int j, m, a;
    
    printf("Entrez la date (jj/mm/aaaa): ");
    scanf("%d/%d/%d",&j,&m,&a);

    if ( (j+1) > nombrejours(m,a) )
    {
         j=1;
         m++;
         if (m>12)
         {
                  m=1;
                  a++;
         }
    }
    
    else j++;
    
    printf("Prochain jour: %02d/%02d/%04d\n",j,m,a);
  
  system("PAUSE");	
  return 0;
}
