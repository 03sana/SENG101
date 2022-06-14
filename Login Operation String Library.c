#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void)
{
	char username[20], pass[20];
	int i, t = 3;

	for (i = 0; i < t; i++)
	{

		printf("Please enter your Username: ");
		scanf("%s", username);
		printf("Please enter your Password: ");
		scanf("%s", pass);

		if (strcmp(username, "user") == 0) 
		{
			if (strcmp(pass, "default") == 0)
				printf("\nWelcome!\n");
			return (0);
		}
		else
		{
			printf("\nWrong Password or Username entered!\nTry again!!\n");
			
		}

	}
	
	
	if (t = 3)
	{
		printf("\nYour tries is over!!!\n");
	}
	return (0);
}