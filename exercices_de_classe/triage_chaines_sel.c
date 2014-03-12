#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i,j;
    char ch[4][30];
    char tmp[30];
    
    strcpy(ch[0],"ca");
    strcpy(ch[1],"ba");
    strcpy(ch[2],"da");
    strcpy(ch[3],"aa");

    for (i=0; i<3; i++)
    {
        for (j=i+1; j<4; j++)
        {
            if (strcmp(ch[i],ch[j]) == -1)
            {
             strcpy(tmp,ch[i]);
             strcpy(ch[i],ch[j]);
             strcpy(ch[j],tmp);
            }
        }
    }
    
    for (i=0; i<4; i++)
    {
        puts(ch[i]);
    }
  
  system("PAUSE");	
  return 0;
}
