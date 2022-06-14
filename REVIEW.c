// Week 4 during the class
// 23.2.2022

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>


//Without function


//int main(void)
//{
//	// 101 subjects
//
//	int prod, quan;
//
//	printf("Welcime to me shop\n");
//	printf("\t1. Pencil\n");
//	printf("\t2. Eraser\n");
//	printf("\t3. Notebook\n");
//	printf("Please make your selection [1-3]: ");
//	scanf("%d", &prod);
//	printf("How many: ");
//	scanf("%d", &quan);
//	printf("You selected %d of %d\n", quan, prod);
//
//	return (0);
//}



// With function



//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void shop(int* p, int* q);
//
//int main(void)
//{
//	
//	int prod, quan;
//
//	shop(&prod, &quan);
//	printf("You selected %d of %d\n", quan, prod);
//
//	return (0);
//}
//
//void shop(int* p, int* q)
//{
//	printf("Welcime to me shop\n");
//	printf("\t1. Pencil\n");
//	printf("\t2. Eraser\n");
//	printf("\t3. Notebook\n");
//	printf("Please make your selection [1-3]: ");
//	scanf("%d", p);
//	printf("How many: ");
//	scanf("%d", q);
//
//}


//----------------------------------------


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char arr[10] = { 's','a', 'd', 'i', 'k' };
//	int i;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	printf("\n");
//
//	return(0);
//}
	//----------------------------------------

	//char arr[10] = { 's','a', 'd', 'i', 'k', '\0'};
	//char arr[10] = "sadik";
	//printf("%s\n", arr);
	
	/*char arr[10];

	printf("Please enter your name: ");
	scanf("%s", arr); 
	printf("%s\n", arr);*/

	//----------------------------------------
//
//	int i, n;
//	char arr[10];
//
//	printf("Please enter your name: ");
//	scanf("%s", arr);
//	printf("%s\n", arr);
//
//	n = strlen(arr); // We use #include <string.h>
//
//	for (i = n-1; i >= 0 ; i--)
//	{
//		printf("%c", arr[i]);
//	}
//
//	printf("\n");
//
//
//
//	return(0);
//}
//

//------------------------------------------

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	char players[5][7] = { "Ahmet", "Hasan", "Naciye", "Ayse", "Nuri" };

	/*printf("%s\n", players);*/
	////printf("%s\n", players[0]);
	//// They are same 

	/*printf("%c\n", players[0][0]);*/
	/*printf("%s\n", players[0][0]);*/
	/*printf("%s\n", players[0 + 3]);*/
	/*printf("%s\n", players[4]);*/

	//for (i = 0; i < 7; i++)
	//{
	//	printf("%s\n", players[i]);
	//	// OR
	//	//printf("%s\n", players + i);
	/*}

	return(0);
}*/


//------------------------------------------
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////#define NUM_STD 100
////#define NM_LEN 15
//
//
//int main(void)
//{
//	char name[100][15];
//	int grade[100];
//	int i = 0;
//	int num_std = 0;
//	char ans = 'y';
//
//	while (ans == 'y')
//	{
//		printf("Please enter Last Name and Grade: ");
//		scanf("%s%d", &name[i], &grade[i]);
//		i++;
//
//		printf("\nAre there more students? [y/n]: ");
//		scanf(" %c", &ans);
//	}
//
//	num_std = i;
//	for (i = 0; i < num_std; i++)
//	{
//		printf("%-20s\t%4d\n", name[i], grade[i]);
//	}
//	return(0);
//}
//

//-----------------------------------------------

//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
//	char s1[15] = "Hello";
//	char s2[15] = "";
//	//
//	printf("%s\n", s1);
	//
	//	//s2 = s1; // We can't do that IN ARRAYS
	//	// we can do it with single integers 
	//	// so we use strcpy
	//
	//	strcpy(s2, s1);
	//
	//	printf("%s\n", s2);
	//
	//	strcpy(s2, "Sadik");
	//
	//	printf("%s %s\n", s1, s2);
	//}
//		//
//	strncpy(s2, s1, 3);
//
//	s2[3] = '\0'; 
//
//	printf("%s %s\n", s1, s2);
//
//}
	////---------------------------------------
//
	char s1[15] = "Hello";
	char s2[15];

	strcpy(s2, "Sadik");

	strcat(s1, " "); // to add space between

	strncat(s1, s2,3); //the first 3 charcters of s2

	printf("%s\n", s1);


	return(0);
}