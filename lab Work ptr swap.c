
/* #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// datatype *ptr_name;		// declaration of the pointer;

	int* ptr;
	double* prt2;

	int a[] = { 1000, 100, 200 };

	ptr = a;	//&a[0]

	for (int i = 0; i < 3; i++)
	{
		printf("Value of *ptr: %d\n", *ptr);
		*ptr++;
	} 
	

	return (0);
} */



// Call by reference
// Swap numbers

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* x, int* y);

int main(void)
{
	int v1 = 5;
	int v2 = 15;
	printf("V1 Value before swap :%d\n", v1);
	printf("V2 Value before swap :%d\n", v2);

	swap(&v1, &v2);

	printf("V1 Value after  swap :%d\n", v1);
	printf("V2 Value after  swap :%d\n", v2);


	return(0);
}

void swap(int* x, int* y)
{
	int temp;
	temp = *x;	//5
	*x = *y;	//15
	*y = temp;	//5
}