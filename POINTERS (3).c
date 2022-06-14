#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
	//int x[3] = { 10, 15, 30 };
	//
	//printf("%d\n", x[0]);		//Printed the value of x[0]
	//printf("%d\n", &x[0]);	//Printed the adress of x[0]
	//printf("%d\n", x);		//Printed the same adress of x[0]
	//printf("%d\n", x + 1);	//Printed the adrees + 4 because it is int
	//printf("%d\n", *x);
	//printf("%d\n", *x + 1);
	//printf("%d\n", *(x + 1));
	//printf("%d\n", *x + 2);
	//printf("%d\n", *(x + 2));

//	return (0);
//}


	int findMin(int a[], int sz);
	int main(void)
	{
		int x[5] = { 3, 5,1, 8, -1 };
		int min;
		
		min = findMin(x, 5);
		printf("Minimum is %d\n", min);

		//int x[5] = { 3, 5,1, 8, -1 }; //This is my array
		//int i;
		//int min = x[0];

		//for (i = 1; i < 5; i++) {
		//	if (x[i] < min) min = x[i];
		//}

		//printf("Minimum is %d\n", min);


		return (0);
	}

	int findMin(int a[], int sz) 
	{
		int i;
		int mn = a[0];

		for (i = 1; i < sz; i++)
		{
			if (a[i] < mn) mn = a[i];
		}

			return (mn);
	}
