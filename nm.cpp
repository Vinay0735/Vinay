#include<stdio.h>
#include<string.h>
int main()
{
	char p1[20],p2[20];
	printf("enter the username : ");
	scanf("%s",p1);
	
	printf("Re enter the user name :  ");
	scanf("%s",p2);
	if((strcmp(p1,p2)==0))
	{
		printf("user name is valid ");
	}
	else
	{
		printf("user name is INVALID ");
	}
	return 0;
}                                                                 
