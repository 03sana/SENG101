// Week 5 during the class
// 3.3.2022


////strcmp function
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	 int n;
//	char s1[15] = "san";
//	char s2[15] = "hyla";
//	char s3[15] = "leen";
//	n = strcmp(s1, "san"); /* n is zero */
//	n = strcmp(s1, s2); /* n is negative */
//	n = strcmp(s2, s1); /* n is positive */
//	n = strcmp(s1, s3); /* n is negative*/
//
//	if (n == 0) printf("equal strings");
//	else if(n <0) printf("%s comes before %s\n", s1, s2);
//	else printf("%s comes before %s\n", s2, s1);
//
//
	//char s1[15] = "sadik";
	//char s2[15] = "sadik";

	//int res = strcmp(s1, s2); //if s1 and s2 comes in alphabatical order
	//                          //if s1 comes before s2 u get a negative value
	//                          // if s1 comes alphabitcally after s2  u get a postive vaule
	//                          // if they are equal u get a zero value

	//if (res = 0)      printf("these two strings are equal\n");
	//else if (res < 0) printf("%s comes before %s\n", s1, s2);
	//else              printf("%s comes before %s\n", s2, s1);
	
	/*return(0);*/


	//strncmp
//
//
//
//	char s1[15] = "can";
//	char s2[15] = "caner";
//
//	int res = strncmp(s1, s2, 3);  //if s1 and s2 comes in alphabatical order
//	                             //if s1 comes before s2 u get a negative value
//	                            // if s1 comes alphabitcally after s2  u get a postive vaule
//	                           // if they are equal u get a zero value
//
//	if (res == 0)     printf("these two strings are equal\n");
//	else if (res < 0) printf("%s comes before %s\n", s1, s2);
//	else              printf("%s comes before %s\n", s2, s1);
//
//
//	return(0);
//}
//

/*************************************************************/
//EXAMPLE SORTING NAMES
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include<ctype.h>
//#define N 4
//#define M 10
//
////sorting in alphabatical order 
//int main(void) {
//	char arr[4][10] = { "Caner", "Huseyin", "Hasan", "Ahmet" };
//	char str[10];
//	int i, j;
//	for (i = 0; i < 4; i++) 
//		printf("%s\n", arr[i]);
//
//	for (i = 0; i < 4; i++)
//		for (j = i + 1; j < 4; j++)
//			if
//				(strcmp(arr[i], arr[j]) > 0) {
//				strcpy(str, arr[i]);
//				strcpy(arr[i], arr[j]);
//				strcpy(arr[j], str);
//
//			}
//	for (i = 0; i < 4; i++) printf("\n%s\n", arr[i]);
//
//	return (0);
//	// 
	// 
	// 
	// 
	// 
	//}
	// *********************************************/
	// 
	// 
	// 
	// 
	//EXAMPLE- SORTING NAMES STRCPY 

	//#define _CRT_SECURE_NO_WARNINGS
	//#include <stdio.h>
	//#include <string.h>
	//#define N 4
	//#define M 10
	//
	//
	//void prnNms(char* s);
	//void xchns(char* s1, char* s2);
	//int main(void) {
	//	char nms[N][M] = { "Caner", "Huseyin", "Hasan", "Ahmet" };
	//	int i, j;
	//	prnNms(nms);
	//	for (i = 0; i < N; i++)
	//		for (j = i + 1; j < N; j++)
	//			if (strcmp(nms[i], nms[j]) > 0)
	//				xchns(nms[i], nms[j]);
	//
	//	prnNms(nms);
	//	return (0);
	//}
	//void prnNms(char* s) {
	//	int i;
	//	for (i = 0; i < N; i++) printf("%s\n", s + i * M);
	//}
	//void xchns(char* s1, char* s2) {
	//	char temp[M];
	//	strcpy(temp, s1);
	//	strcpy(s1, s2);
	//	strcpy(s2, temp);
	//}


	/******************************************************/

	/*strtok function*/

	//
	//#define _CRT_SECURE_NO_WARNINGS
	//#include <stdio.h>
	//#include <string.h>
	//int main() {
	//	/*char str[] = "Hearts#Spades#Diamonds#Clubs";*/
	//	
	//	char str[ ] = "today, it is snowing outside";
	//
	//	char delims[] = ", ";
	//	char* result;
	//	result = strtok(str, delims);
	//	while (result != NULL) {
	//		printf("result is \"%s\"\n", result);
	//		result = strtok(NULL, delims);
	//	}
	//}

	/***************************************************/

	/*gets & puts*/

	//#include <stdio.h>
	//
	//int
	//main(void)
	//{
	//	char line[80];
	//
	//	puts("Please enter a line:");
	//	gets(line);
	//	puts("This is the line you entered");
	//	puts(line);
	//
	//	return (0);
	//}

	/************************************************/

	/*  fgets/fputs   */
	//
	//#define _CRT_SECURE_NO_WARNINGS
	//#include <stdio.h>
	//#include <string.h>

	//int main(void)
	//{
	//	char line[80];
	//	FILE* myfile;
	//	char* status;
	//	myfile = fopen("myfile.txt", "w");
	//	fputs("This is line 1\n", myfile);
	//	fputs("This is a long long line which is line 2\n", myfile);
	//	fputs("This is line 3", myfile);
	//	fclose(myfile);
	//	myfile = fopen("myfile.txt", "r");
	//
	//	status = fgets(line, 50, myfile);
	//	while (status != NULL) {
	//		if (line[strlen(line) - 1] == '\n')
	//			line[strlen(line) - 1] = '\0';
	//
	//		puts(line);
	//		status = fgets(line, 50, myfile);
	//	}
	//
	//	return (0);
	//}


	/* getchar/ putchar   getc/putc  */

	//Write a function that takes a string argumentand converts that string to all uppercase letters//
	//
	#define _CRT_SECURE_NO_WARNINGS
	#include <stdio.h>
	#include <string.h>
	#include<ctype.h>


	int main(void) {
	
	
		char x = 'a';
		char y = 'D';
	
		printf("%c\n", y);
	
		if (islower(y)) printf("%c is lowercase\n",y);
		else printf("%c is not lowercase\n",y);
	
	
		x = toupper(x);
		if (islower(x)) printf("%c is lowercase\n,x");
		else printf("%c is not lowercase\n", x);
	
		return(0);
	}
	/*******/
	char* CnvUppr(char* str);
	int main() {
	
		char x[20] ;
	
		char* y = x;
	
		printf("please enter a string: ");
		gets(x);
	
		puts(x);
	
		y = CnvUppr(x);
	
		puts(y);
	
		return(0);
	}
	char* CnvUppr(char* str)
	{
		int i = 0;
		while (str[i] != '\0') {
			if (islower(str[i]))
	
				str[i] = toupper(str[i]);
	
			i++;
		}
		return(str);
	}

	/*PROJECT*
	Problem:
	Write a program that will read a text message from a file
	and will report to user if that file contains any of the
	words contained in a list.
	2. Analysis:
	❑A text file means, a file that contains printable
	characters (alphabetical, numerical, punctuation, signs,
	...)
	❑Where should we keep the list of words to be searched?
	❑Will the text be in one case (upper or lower) or mixed?
	❑Should I stop as soon as one match is found?
	3. Design://


	/*
	* Reads a text file line by line and
	* Searches each line for key words
	*/
	//#define _CRT_SECURE_NO_WARNINGS
	//#include <stdio.h>
	//#include <string.h>
	//#include <ctype.h>
	//#define KEYWORDNO 4   /* When a keyword is added
	//                         increase this count */
	//#define KEYWRDLEN 7   /* Max size of a keyword */
	//
	//void CnvUppr(char* str);
	//int SearchWrd(char* Wrd, char WrdLst[][KEYWRDLEN], int Cnt);
	//
	//int main(void)
	//{
	//	FILE* txtfl;                   /* Input File */
	//	char str[81];                  /* Array for each line read */
	//	char* status;                  /* Pointer for read status */
	//	char* delims = " ,.!?:;";        /* Word separators */
	//	char* Wrd;                     /* Word Token */
	//	char WrdLst[KEYWORDNO][KEYWRDLEN] = { "BOMB", "GUN", "OSAMA", "TERROR" };
	//
	//	int WrdInx, i;                  /* loop counters */
	//	int LineNo = 0;                /* Line number read */
	//
	//    /* Process line and read another until end of file */
	//	txtfl = fopen("text.txt", "r");
	//	status = fgets(str, 80, txtfl);
	//	while (status != NULL) {
	//		/* if not end of file, increment line number */
	//		LineNo++;
	//
	//		/* Convert the whole line to uppercase */
	//		CnvUppr(str);
	//
	//		/* Get the first word of the line */
	//		Wrd = strtok(str, delims);
	//
	//			/* Search word in keyword list until end of line */
	//			while (Wrd != NULL) {
	//
	//				WrdInx = SearchWrd(Wrd, WrdLst, KEYWORDNO);
	//				/* If found, print message */
	//				if (WrdInx >= 0) printf("Line No: %d contains %s\n",
	//					LineNo, WrdLst[WrdInx]);
	//
	//				/* Get next word */
	//				Wrd = strtok(NULL, delims);
	//
	//			}
	//		/* Get next line */
	//		status = fgets(str, 80, txtfl);
	//	}
	//	return(0);
	//}
	///*
	//* converts a string to all uppercase letters
	//*/
	//void CnvUppr(char* str)
	//{
	//	int i = 0;
	//	while (str[i] != '\0') {
	//		if (isalpha(str[i])) str[i] = toupper(str[i]);
	//		i++;
	//	}
	//}
	///*
	//* Searches a word in a wordlist
	//* Returns -1 if not found, 0 or bigger if found
	//*/
	//int SearchWrd(char* Wrd, char WrdLst[][KEYWRDLEN], int Cnt)
	//{
	//	int i;
	//	int Found = -1;
	//
	//	for (i = 0; i < Cnt; i++)
	//		if (strcmp(Wrd, WrdLst[i]) == 0) Found = i;
	//	return(Found);
	//}
 //