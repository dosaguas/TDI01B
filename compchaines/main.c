#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int longueur(char chaine[])
{
    int i;
    for(i=0;i<20;i++)
    {
        if(chaine[i]=='\0')
        return i;
        }
        }
  bool comparer(char chaine1[],char chaine2[])
  {
       int i;
       bool egal=true;
       int l=longueur(chaine1);
       for (i=0;i<=l;i++)
       {
           if (chaine1[i]!=chaine2[i])
           egal= false ;
       }
           return egal;
             
       }
        
        
int main(int argc, char *argv[])
{
    char chaine1[20];
    char chaine2[20];
    int i;
    bool egal;
    printf("entrer la premiere chaine:");
    gets(chaine1);
    printf("entrer la deuxieme chaine:");
    gets(chaine2);
    if (comparer(chaine1,chaine2))
    printf("le comparaison des chaines est identique");
    else
    printf("le comparaison des chainesest different");
    
    
    
    
    
  
  system("PAUSE");	
  return 0;
}
