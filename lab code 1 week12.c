#include<stdio.h>
/*PROGRAM that uses a function cube to calculate and print the squares
of the integers from 1 to 10*/

int cube(int y);


int main(void) {


	int x;


	for (x = 1; x <= 20; x++)
		if (x % 2 != 0)
		printf("%d ", cube(x));

	return(0);
}


int cube(int y) {

	return(y * y * y);

}