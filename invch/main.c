#include <stdio.h>
#include <stdlib.h>

int longeur(char ch[])
{
    int i;
    for(i=0; i<20; i++)
    {
             if (ch[i]=='\0')
             return i;
    }
}


int main(int argc, char *argv[])
{
  int i,l;
  char chaine[20], ch[20];
  
  printf("Entrez la chaine: ");
  gets(chaine);
  
  l = longeur(chaine);
  
  for (i = l-1; i >= 0; i--)
  {
      ch[l-1-i] = chaine[i];
  }
  
  ch[l]='\0';
  
  puts(ch);
  
  system("PAUSE");	
  return 0;
}
