#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  char stagiers[10][20];
  
  for (i=0; i<10; i++)
  {
      printf("Entrez le nom du stagier %02i: ", i+1);
      gets(stagiers[i]);
  }
  
  printf("\nListe des stagiers:\n");
  
  for (i=0; i<10; i++)
  {
      printf("%02i. ", i+1);
      puts(stagiers[i]);
  }
  
  system("PAUSE");	
  return 0;
}
