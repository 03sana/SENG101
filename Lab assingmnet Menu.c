/*sana nassani lab assignment 4*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(void) {
	int sel;
	float rad;
	double result;

	printf("enter the radius of circle: ");
	scanf("&f", &rad);

	/*menu of selections*/

	printf("select calculation type (1-3)\n");
	printf("\t. 1-)Diameter\n");
	printf("\t. 2-)Circumference\n");
	printf("\t. 3-)Area\n");


	/* get users choice */
	printf("Please enter your selection: ");
	scanf("%d", &sel);

	if (selection > 3 || selection < 0) {
		printf("invalid entry\n");
		return (0);
	}

	/* calculate the result*/

	switch (selection) {
	case 1:
		result = (rad * 2); break;
	case 2:
		result = (2 * PI * rad); break;
	case 3:
		result = (PI * pow(rad, 2)); break;

	default:
		printf("invalid entry\n");
	}
	/* display the result*/

	printf("the result is %.2f\n", result);

}

return(0);
}