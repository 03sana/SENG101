//WEEK 2 POINTERS AND FILES

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//If we know how many values are in the file
//WITHOUT ARRAYS



int main (void)
{
	//Creat a FILE pointer 

	FILE* fl;
	int x; // x The value of x
	
	//First I have to open that file for reading

	fl = fopen("Text.txt", "r"); //Text.txt the actual name it use only here 

	//I read from that file  //If you want to refere thet file you have to use file pointer

	fscanf (fl, "%d", &x); //Assign that value to variable x

	//And then print the value

	printf("The value is %d\n", x);

	//Close the file 

	fclose(fl);

	return(0);

} 


//WITH ARRAYS

 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 3

int main(void)
{
	FILE* fl;
	int x;
	int i;

	fl = fopen("Text.txt", "r");

	for (i = 0; i < N; i++)
	{
		fscanf(fl, "%d", &x);
		printf("The value is %d\n", x);
	}

	fclose(fl);

	return(0);
} 


//If we do not know how many values are in the file:

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fl;
	int x;

	fl = fopen("Text.txt", "r");

	while (!feof(fl)) //feof Not ! ent of file
	{
		fscanf(fl, "%d", &x);
		printf("The value is %d\n", x);
	}

	fclose(fl);

	return(0);
} 


//ANOTHER WAYS 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fl;
	int x;
	int i;
	int readStat;


	fl = fopen("Text.txt", "r");

	readStat = fscanf(fl, "%d", &x);

	while (readStat != EOF ) 
	{
		printf("The value is %d\n", x);
		readStat = fscanf(fl, "%d", &x);
	}

	fclose(fl);

	return(0);
} 


//If the file does not exist:

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE* fl;
	int x;
	int i;
	int readStat;


	fl = fopen("Txt.txt", "r");
	if (fl == NULL)
	{
		printf("File does not exist\n");
		return(-1);
	}

	readStat = fscanf(fl, "%d", &x);

	while (readStat != EOF)
	{
		printf("The value is %d\n", x);
		readStat = fscanf(fl, "%d", &x);
	}

	fclose(fl);

	return(0);
}