#include<stdio.h>
/*program to find number of even and odd numbers in the list*/

//
/// Terminal Output
//Please enter number of values : 10
// Enter a value : 9
/// Enter a value : 19
//Enter a value : 18
/// Enter a value : 92
//// Enter a value: 17
//// Enter a value: 1
// Enter a value : 97
// Enter a value : 75
///  Enter a value : 68
// Enter a value : 19
//Even count in the list of 18 numbers is:
// Odd count in the list of 18 numbers is:
//
//int main(void) {
//
//	int n;
//	int num;
//	int ecount = 0, ocount = 0;
//
//	printf("please enter number of values: ");
//	scanf_s("%d", &n);
//
//	int counter;
//	for (counter  = 0; counter < n; counter++)
//	{
//		printf("enter a value: ");
//		scanf_s("%d", &num);
//
//		if (num % 2 == 0)
//			ecount++;
//
//		else
//			ocount++;
//
//	}
//
//	printf("Even count in the list of %d numbers is :%d ", n, ecount);
//	printf("Even count in the list of %d numbers is :%d ",n, ocount);
//
//
//
//	return(0);
//}
//
/*sana nassani
lab assignmet 8
date: 12-3-2021*/
/*program to find the average grade of n student in the list*/

#include<stdio.h>
int main(void) {

	double ave;
	int grade;
	int i;
	int total= 0;

	int n;

	printf("please student number: ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf(" enetr grade of student: ");
		scanf_s("%d", &grade);

		total += grade;
	}
	ave = total / n;

	printf("your average is %.2f", ave);



	return(0);
}
//
//#include<stdio.h>
//int main(void) {
//
//	int i, j, rows;
//
//
//	printf("enter the row number");
//	scanf_s("%d", &rows);
//
//	for (i = 0; i < rows; i++) {
//		for (j = 0; j <= i; j++) {
//			printf("%d", i + 1);
//		}
//		printf("\n")
//
//	}
//
//
//	return(0);
//
//}


