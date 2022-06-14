/*a program to print even or odd number*/


#include<stdio.h>

int evenOdd(int num);

int main(void) {


	int num;
	

	printf("enter an integer: ");
	scanf_s("%d", &num);

	printf("%d", evenOdd(num));

}

int evenOdd(int num) {



		if (num % 2 == 0) {
			printf("the number is even\n");
		}
		else if (num % 2 != 0) {
			printf("the number is odd\n");
		}

		return num;
	

}


