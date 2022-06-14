
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// How to print string

int main(void)
{
	 
	char city[] = "Afyon karahisar";
	int x = strlen(city); //does not count \0 
	printf("The length of city is %d\n", x); 
	// output is : 15
	printf("The length of the array is %d\n", sizeof(city));
	// output is : 16

	// city = "Ankara"; // I can not use the array name 

	printf("The name of the city is: %s\n", city);
	printf("The name of the city is: %s\n", "Ankara");
	printf("The name of the city is: %s\n", "Afyon karahisar");
	printf("Hello %s\n", city); // the name of array
	
	
	/* 
	printf("%9s\n", "Ankara");
	printf("%9s\n", "Gaziantep");
	printf("%9s\n", "Ordu");
	// All are a line 
	*/

	// How scanf works when it is reading integers or decimal numbers
	
	/*
	int x;
	double y;

	printf("Please enter an integer: ");
	scanf("%d", &x);

	printf("The value entered is %d\n", x);


	printf("Please enter a decimal number: ");
	scanf("%lf", &y);

	printf("The value entered is %f\n", y);
	*/
	
	/*
	char x[15];
	printf("Please enter your name: ");
	scanf("%s", x); // have to give the begining address of array

	printf("Hello %s\n",x);
	*/ 


	/*
	char	 c[5];
	int		 n;
	char	 d[4];
	int		 t;


	printf("Please enter course information\n");
	printf("Ex:	CENG 114 Fri 240: ");

	scanf("%s%d%s%d",c, &n, d, &t);

	printf("%s %d %s %d\n", c, n, d, t);
	*/

	/*
	 [2] rows [3] columns = 6
	int mat[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int i;

	for (i = 0; i < 3; i++) printf("%d\t", mat[0][i]); // the first give me the row the second give me the columns
	printf("\n");

	for (i = 0; i < 3; i++) printf("%d\t", mat[1][i]); // the first give me the row the second give me the columns
	printf("\n");
	*/

//	char players[5][7] = { "Ahmet", "Hasan", "Naciye", "Ayse", "Nuri" };
//	// the total 35
//
//										// The output
//	printf("%s\n", players[1]);			// Hasan
//	printf("%c\n", players[1][0]);		// H
//	printf("%s\n", players);			// Ahmet
//	printf("%d\n", players);			// The address 
//	printf("%d\n", players[0]);			// Same thing address of first element
//	printf("%d\n", &players[0][0]);		//
//	printf("%c\n", players[2][2]);		// c
//	printf("%c\n", players[3][3]);		// e
//	return (0);
//}