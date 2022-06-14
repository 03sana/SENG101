/* C program to sort names in alphabetical order 
* Week 4 lab work
* 25.2.2022 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define N 4
#define M 10
void prn(char*s);
void xchn(*s1, char* s2);
int main(void)
{
	char names[n][8] = { "Semra", "Mustafa", "Kadir", "Atalay", "Yaren" };
	char temp[8];
	int k, j;

	prn(nms);
	/* Sorting */

	for (k = 0; k < n - 1; k++)
		for (j = 0; j < n - 1; j++)
			if (strcmp(names[j], names[j + 1]) > 0)
			{
				strcpy(temp, names[j]);
				strcpy(names[j], names[j + 1]);
				strcpy(names[j + 1], temp);
			}

	printf("\nAfter sorting----->\n");
	for (int i = 0; i < n; i++)
	{
		printf("%s\n", names[i]);
	}
   

	return (0);
}
void prn(char*s) {

	int i;

	printf("Before sorting----->\n");
	for (int i = 0; i < n; i++)
	{
		printf("%s\n", s + i * M);
	}

}