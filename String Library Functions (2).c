
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	
	// STRLEN


	/*char s1[15] = "Hello";
	char s2[15] = "My name is:";

	printf("%s\n", s1);
	printf("The length of the first string is %d\n", strlen(s1));
	printf("%s\n", s2);
	printf("The length of the second string is %d\n", strlen(s2));*/
	

	// STRCPY


	//char s1[15] = "Hello";
	//char s2[15] = "My name is:";
	//char s3[40];

	//strcpy(s3, s1);					/* s3 contains Hello\0 */
	//strcpy(s3, s2);					/* s3 contains My name is:\0 */
	//strcpy(s3, "How are you?");		/* s3 contains How are you?\0 */


	// STRNCPY

	//char s1[15] = "Hello";	
	//char s2[15] = "My name is:";
	//char s3[40];

	//strncpy(s3, s1, 7);					/* s3 contains Hello\0\0 */
	//strncpy(s3, s2, 7);					/* s3 contains My name */
	//strncpy(s3, "How are you?", 7);		/* s3 contains How are*/


	// STRCAT


	//char s1[15] = "Hello";
	//char s2[6] = "John";
	//char s3[40];

	//strcpy(s3, s1);		/* s3 contains Hello\0 */
	//strcpy(s3, "");		/* s3 contains Hello\0 */
	//strcat(s3, s2);		/* s3 contains Hello John\0 */


	// STRNCAT


	//char s1[15] = "Hello";
	//char s2[6] = "John";
	//char s3[40];

	//strcpy(s3, s1);				/* s3 contains Hello\0 */
	//strcat(s3, "");				/* s3 contains Hello\0 */
	//strncat(s3, s2, 6);			/* s3 contains Hello John\0\0 */
	//strncat(s3, s1, 3);			/* s3 contains Hello JohnHel\0 */


	// STRCMP

	int n;
	char s1[15] = "Can";
	char s2[15] = "Caner";
	char s3[15] = "Cem";

	//n = strcmp(s1, "Can");		/* n in zero */
	//n = strcmp(s1, s2);	   		/* n is negative */
	//n = strcmp(s2, s1);			/* n is positive */
	//n = strcmp(s1, s3);			/* n is positive */
	
	//n = strcmp(s1, s3);
	printf("%d", strcmp(s1, s3));

	// STRNCMP


	//int n;
	//char s1[15] = "Can";
	//char s2[15] = "Caner";
	//char s3[15] = "Cem";

	//n = strncmp(s1, s2, 4); /* n is negative */
	//n = strncmp(s2, s2, 3); /* n is zero */
	//n = strncmp(s1, s3, 3); /* n is nrgative */



	return (0);
}