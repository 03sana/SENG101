/* Lab Assignment 2 Week 4

* Date		 : 25.2.2022 */

// Program 1 : C program that perform login operation.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char username[10] = "user";
    char pass[15] = "defult";
    int i;
    int tries = 3;

    

    printf("Please enter your username:\n");
    scanf("%s", username);

    printf("Please enter your password:\n");
    scanf("%s", pass);

    
    for (i = 0; i < tries; i++) 
    {
        if (strcmp(username[i], pass[i]) == 0)
        {
            printf("Welcome!\n");
        }
        else
        {
            printf("Wrong password\n");

        }
    }
   
    printf("You tried %d times\n", tries);



    // Program 2 :


	/* char str1[100] = "goodday";
	char str2[100] = "noontime";
	char str3[100] = "";

	strncpy(str3, str1, 4);
	strcat(str3, ""); // good
	strncat(str3, str2, 4);

	printf("str1 = %s\nstr2 = %s\nstr3 = %s\n", str1, str2, str3);

	// Comparing
	// str3 with str1 , find the greatest ?

	if (strcmp(str3, str1) > 0)
		printf("str3 is greater then str1\n");
	else
		printf("str3 is less than str1\n"); */



		// Extra Work 


		char s1[100];
		char s2[100];
		char s3[100];

		printf("Please enter first string --> ");
		scanf("%s", s1);
		printf("\nPlease enter second string --> ");
		scanf("%s", s2);

		strcpy(s3, s1);
		strcat(s3, s2);
		strcat(s3, "");

		printf("\nstr1 = %s\nstr2 = %s\nstr3 = %s\n", s1, s2, s3);

		if (strcmp(s1, s3) < 0)
		{
			printf("\ns1 less than s3\n");
		if (strcmp(s1, s2) == 0)
			printf("\ns1 = s2\n");
		}

		else
			printf("\ns1 greater than s3\n"); */

	return (0);
}