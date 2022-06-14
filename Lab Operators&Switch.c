//programmer sana nassani
//lab work
//date 11-19-2021

/*a program that displays arthmetic operators using switch case */
/*INPUT OF THE PROGRAM: NUMBERS, CHOICE*/
/*arthmetic operators : sum , product, subtraction , division */
/*OUTPUT OF THE PROGRAM : RESULTS*/

#include<stdio.h>

int main(void) 
{
	int num1, num2;  /*input of the program*/

	printf("enter two numbers: ");
	scanf_s("%d%d", &num1, &num2);

	char choice;
	printf("s for sum\nt for subtraction\nm for multiplication\nd for division ");
	printf("please enter your choice: ");
	scanf_s(" %c", &choice);
	
	int sum, pro, sub, div;

	switch (choice)
	{
	case 's':
		sum = num1 + num2;
		printf("sum is %d", sum);
		break;
	case 't':
		pro = num1 * num2;
		printf("product is %d", pro);
		break;
	case 'm':
		sub = num1 - num2;
		printf("subtraction is %d", sub);
		break;
	case 'd':
		div = num1 / num2;
		printf("division is %d", div);
		break;


	default:

		printf("the value is wrong");

	}



	return(0);

}
