
// 7.3 Chapter 7 page 318 

/* #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void)
{
	float numbers[SIZE] = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
	float* nPtr;
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("%.lf", numbers[i]);
	}

	printf("\n");

	nPtr = numbers;
	nPtr = &numbers[0];
	

	for (i = 0; i < SIZE; i++)
	{
		printf("%.lf", *(nPtr+i));
	}

	printf("\n");


	for (i = 0; i < SIZE; i++)
	{
		printf("%.lf", *(numbers + i));
	}

	printf("\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%.lf", nPtr[i]);
	}

	printf("\n");

	numbers[4];
	*(numbers + 4);
	nPtr[4];
	*(nPtr + 4);



	return (0);
} */


// 7.4 Chapter 7 page 318 


/* #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number1, number2;
	float* fPtr;
	fPtr = &number1;

	printf("The value of *fPtr is %f\n", *fPtr);
	number2 = *fPtr;
	printf("The value of number2 is %f\n", number2);
	printf("The address of number1 is %p\n", &number1);
	printf("The address stored in fPtr %p\n", fPtr);


	return(0);
} */


// 7.5 Chapter 7 page 318 

/* void exchange(float* x, float* y)
void exchange(float* x, float* y);
int evaluate(int x, int (*poly)(int))
int evaluate(int x, int (*poly)(int)); */
