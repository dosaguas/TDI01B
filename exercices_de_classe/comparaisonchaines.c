#include <stdio.h>

void main()
{
	char ch1[]="cbba";
	char ch2[]="dbba";
	char ch3[]="abba";	
	char tmp1[20],tmp2[20],tmp3[20];
	
	if (strcmp(ch1,ch2)<0)
	{
		strcpy(tmp1,ch2);
		strcpy(tmp2,ch1);
	}
	else
	{
		strcpy(tmp1,ch1);
		strcpy(tmp2,ch2);		
	}
	
	if (strcmp(tmp1,ch3)<0)
	{
		strcpy(tmp3,tmp2);
		strcpy(tmp2,tmp1);
		strcpy(tmp1,ch3);
	}
	else
	{
		if (strcmp(tmp2,ch3)<0)
		{
			strcpy(tmp3,tmp2);
			strcpy(tmp2,ch3);
		}
		else
		{
			strcpy(tmp3,ch3);		
		}		
	}
	
	
	printf("%s\n",tmp1);
	printf("%s\n",tmp2);
	printf("%s\n",tmp3);
}
