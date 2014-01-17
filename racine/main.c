#include <stdio.h>
#include <stdlib.h>

int main()
{
  	int i,c;
	float r,p,m,b;
	r=0;
    c=0;
   	printf("Entrez le nombre: ");
   	scanf("%f",&b);
    //printf("%d\n",b);
    
	if (b>=1)
	{
		p=b;
	}
	else
	{
		p=1;
	}
	
	while ((b - (m*m)) > 0.0001 || ((m*m)-b) > 0.0001)
	{
		m=((p+r)/2);
		if ((m*m) > b)
		p=m;
		if ((m*m) <b)
		r=m;
		c++;
	}
	
	printf("%f\n",m);
	printf("Nombre repetitions: %d\n",c);
	
  system("PAUSE");	
  return 0;
}
