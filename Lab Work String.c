#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// PROGRAM 1

	/* char daysinweek[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

	printf("%s\n", daysinweek);				// Monday
	printf("%s\n", daysinweek[0]);			// Monday
	printf("%c\n", daysinweek[0][0]);		// M
	printf("%p\n\n", daysinweek);			// Address

	for (int i = 0; i < 5; i++) 
	{
		printf("%s\n", daysinweek[i]);
	} */


	// PROGRAM 2

	char string1[20];
	char string2[20];
	int i = 0;
	int j = 0;

	char* ptr1;
	char* ptr2;

	printf("Enter a string> ");
	scanf("%s", string1);

	printf("Enter second string> ");
	scanf("%s", string2);

	ptr1 = string1;
	ptr2 = string2;

	while (string1[i] != '\0')
	{
		ptr1++; 
		i++;
	}
	while (string2[j] != '\0')
	{
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
		j++;
	}

	*ptr1 = '\0';

	printf("After combining two strings the result string is %s ", string1);


	return (0);
}