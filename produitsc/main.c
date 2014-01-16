#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int t1[4][3]={2,4,3,
                  1,3,6,
                  7,0,2,
                  3,2,1};
                  
    int t2[3][4]={9,0,1,5,
                  7,6,2,3,
                  4,1,2,4};
    
    int t3[4][4];
    int i,j;
    
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            t3[i][j]=0 ;
        }
    }    
    
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            t3[i][j] += t1[i][j] * t2[j][i];
        }
    }
            
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {    
             printf("%4i ",t3[i][j]);
        }
        printf("\n",t3[i][j]);
    }
       
  
  system("PAUSE");	
  return 0;
}
