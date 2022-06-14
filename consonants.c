#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<ctype.h>
#define SIZE 20
void consonant(char*);
void concat(char*, char*);
int main()
{
	char string1[SIZE] = "\0", string2[SIZE] = "\0";
	char tar1[SIZE], tar2[SIZE];
	printf("Enter String 1:\n");
	scanf("%s", string1);
	printf("Enter String 2:\n");
	scanf("%s", string2);
	printf("Concatenated String with Consonants\n");
	consonant(string1);
	consonant(string2);
	return 0;
}
void consonant(char* str)
{
	char* target = str;
	int target_index = 0;
	int lenstr = 0;
	while (*target)
	{
		target++;
		lenstr++;
	}
	for (int i = 0; i < lenstr; i++)
	{
		if ((str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' ||

			str[i] == 'i'

			|| str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u'

			|| str[i] == 'U'))

			continue;
		else
		{
			//*target++ = str[i];
			target[target_index] = str[i];
			printf("%c", target[target_index]);
			++target_index;
		}
	}
}