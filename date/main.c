#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

void jours(int a)
{
    switch (a)
    {
           case 1:
                printf("Lundi");
                break;
           case 2:
                printf("Mardi");
                break;
           case 3:
                printf("Mercredi");
                break;
           case 4:
                printf("Jeudi");
                break;
           case 5:
                printf("Vendredi");
                break;
           case 6:
                printf("Samedi");
                break;
           case 0:
                printf("Dimanche");
                break;
                   
    }
}


int main(int argc, char *argv[])
{
    int refdate, refjour, refmois, refannee;
    int jour, mois, annee;
    int j,m,a;
    int J;
    int i,k;
    bool passe=false;
    
    refdate = 2;
    refjour = 10;
    refmois = 12;
    refannee = 2013;
    
    printf("Entrez la date (jj/mm/aaaa): ");
    scanf("%d/%d/%d",&jour,&mois,&annee);
    
    if((annee<refannee) || (mois<refmois) || (jour<refjour))
    {
                  a=annee;
                  annee=refannee;
                  refannee=a;
                  
                  m=mois;
                  mois=refmois;
                  refmois=m;
                  
                  j=jour;
                  jour=refjour;
                  refjour=j;
                  
                  passe=true;
                  
    }      
                        
                                           
    
    if ((refmois == mois) && (refannee == annee))
    {
                J= (jour - refjour); 
                
                //printf("1.JOURS PASSE  %d",(J)); 
                //printf("\n");
    } 
    
    if ((refmois != mois) && (refannee == annee))
    {
                J=(nombrejours(refmois,refannee)-refjour) + jour;
                
                
                for (i=(refmois+1); i<mois; i++)
                {
                    J=J+nombrejours(i,annee);
                }
                
                //printf("2.JOURS PASSE  %d",(J)); 
                //printf("\n");
    }  
    
    if (refannee != annee)
    {
                J=((nombrejours(refmois,refannee)-refjour) + jour);
                
                                                             
                for(i=(refannee+1); i<annee; i++)
                {
                                    for (k=1; k<13; k++)
                                    {
                                        J=J+nombrejours(k,i);
                                    }
                }
                
                                                                   
                
                for (i=refmois+1; i<13; i++)
                {
                    J=J+nombrejours(i,refannee);
                }
                
                                                                    
                
                for (i=1; i<mois; i++)
                {
                    J=J+nombrejours(i,annee);
                }
                
                //printf("3.JOURS PASSE  %d",(J)); 
                //printf("\n");  

    }


    if(passe)
    {
      jours((refdate +(7 -(J%7)))%7);    
    } else jours((refdate+J)%7);
    
    printf("\n");        
  
  system("PAUSE");	
  return 0;
}
