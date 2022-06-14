
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	float arr[] = { 8, 5, -7, 12, 0, 3 };
	printf(" SUM=%f\n", sum(arr, 5));
}
float sum(float* ptr, int size)
{
	float isum = 0;
	for (int i = 0; i < size; i++)
	{
		isum += *++ptr; // isum = isum + *++ptr // 5 = 0 + 5
						// -2 = 5 + -7

		printf("iteration no %d\t value of *ptr %.0f\t sum %.0f\n", i, *ptr, isum);
		 
		// iteration no 0	 value of *ptr	 5	 sum 5
		// iteration no 1	 value of *ptr	-7	 sum -2
		// iteration no 2	 value of *ptr	12	 sum 10
		// iteration no 3	 value of *ptr	0	 sum 10
		// iteration no 4	 value of *ptr	3	 sum 13
	}
	return (isum);
}



void main()
{
	float arr[] = { 8, 5, -7, 12, 0, 3 };
	printf(" SUM=%f\n", sum(arr, 5));
}
float sum(float* ptr, int size)
{
	float isum = 0;
	for (int i = 0; i < size; i++)
	{
		isum += ++ *ptr; //isum = isum + ++ *ptr // 0	9,000000	9,000000
						 // 19   = 9 + 10		 // 19 + 11 = 30	// 30 + 12 = 42
						 // 42 + 13 = 55

		printf("iteration no %d\t value of *ptr %f\t sum %f\n", i, *ptr, isum);
		
		// iteration no 0	 value of *ptr 9,000000		  sum 9,000000
		// iteration no 1	 value of *ptr 10,000000	  sum 19,000000
		// iteration no 2	 value of *ptr 11,000000	  sum 30,000000
		// iteration no 3	 value of *ptr 12,000000	  sum 42,000000
		// iteration no 4	 value of *ptr 13,000000	  sum 55,000000



	}
	return (isum);
} 