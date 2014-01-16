#include <stdio.h>
#include <stdlib.h>

float carre(float a)
{
	return a*a;
}

float racine(float b)
{
	int i;
	float r,p,m;
	r=0;
	
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
	}
	
	return m;
}

float norme(float c, float d, float e)
{
	return racine((carre(c)) + racine(carre(d)) + racine(carre(e)));
}

int main(void) {
	
	float X,Y,Z;
	float table[3][3];
	int i,j;
	
	printf("Entrez X: ");
	scanf("%f",&X);
	
	printf("Entrez Y: ");
	scanf("%f",&Y);
	
	printf("Entrez Z: ");
	scanf("%f",&Z);
	
	table[0][0] = norme(X,Y,Z);
	
	for (j=1;j<3;j++)
	{
		table[0][j] = carre(table[0][j-1]);
	}
	
	for (i=1;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			table[i][j] = racine(table[i-1][j]);
		}
	}
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%03.3f ",table[i][j]);
		}
		printf("\n");
	}	
	
	system("pause");
	return 0;
}
