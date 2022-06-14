///*write a program that input three integers 
//*from the prompt, then calculates sum, the average, 
//* the product, the smallest value and the largest value
//* of these numbers. 
//*
//*output should be like this :
//* terminal output
//* please enter three numbers: 13  27  14 
//* sum is 54
//* average is 18
//* product is 4914
//* the smallest value is 13 
//* the largest value is 27
//* /
///

#include <stdio.h>

   int main(void)
{
/*variable decleration*/
	int num1, num2, num3;

	printf("please enter three numbers: ");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	int sum; /*sum of three numbers*/
	sum = num1 + num2 + num3;

	printf("sum is: %d\n", sum);

	int average; /*average of three numbers */
	average = sum / 3; /* average =(num1+num2+num3)/3*/ /*assigning*/

	printf("average is :%d\n", average);

	int product;
	product = num1 * num2 * num3;
	printf("average is: %d\n", average);

	int product;
	product = num1 * num2 * num3;
	printf("average is: %d\n", product);
	
	int min;//56  5  13//
	//min = 56 
	if (num2 < min)  //5 < 56 ===true 
		min = num2;   ///min =5 
	
	if (num3 < min)  //13 < 5 ===false
		min = num3;   ///min =5 

	printf("the smallest value is %d\n", min);

	int max;
	max = num1;

	if (num2 > max)
		max = num2;

	if (num3 > max)
		max = num3;

	printf("the largest value is %d\n", max);


	return(0);
}