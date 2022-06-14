/* WEEK 2 POINTERS 
9.2.2022 
The programs we did in the class */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* int main(void)
{
	int x = 2;
	char y = 'q';
	double z = 10.23;

	printf("x = %d\n", x);
	printf("y = %c\n", y);
	printf("z = %f\n", z);
	
	//&x means the address of x
	
	printf("Address of x = %d\n", &x); 
	printf("Address of y = %d\n", &y);
	printf("Address of z = %d\n", &z);
	
	//Every time I run the program the address change,
	we don't have to know the addresses


	return(0);
 }*/



//POINTERS AND ARRAYS



/* int main (void)
{
	int x[3] = { 10, 15, 30 };

	printf("%d\n", x[0]);		//The value of x[0] which is 10
	printf("%d\n", &x[0]);		//The address of x[0] , where the first element is stored 
	printf("%d\n", x);			//Same as &x[0], x is an address itself
	printf("%d\n", x + 1);		//The address + 4, going to next address 4 bytes later
	printf("%d\n", *x);			//Go to that address and get the value from there 
	printf("%d\n", *x + 1);		//Value of x which is 10 + 1 it is 11
	printf("%d\n", *(x + 1));	//First it's calculated (x+1) and goes to thet address and find the value which is 15
	printf("%d\n", *x + 2);		
	printf("%d\n", *(x + 2));

	return (0);
} */




//POINTERS AND FUNCTION


//WiTHOUT A FUNCTION




/* int main(void)
{
	int x[5] = { 3, 5, 1, 8, -1 };
	int i;
	int min = x[0];

	for (i = 1; i < 5; i++) 
	{
		if (x[i] < min) min = x[i];
	}

	printf("Minimum is %d\n", min);


	return (0);
} */



//WITH FUNCTIONS WHITOUT POINTERS



/*int findMin(int a[], int sz); //This is the prototype

int main(void) 
{
	int x[5] = { 3, 5, 1, 8, -1 };
	int min;

	min = findMin(x, 5);

	printf("Minimum is %d\n", min);

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

	return(mn);
} */

 

//WITH FUNCTIONS WITH POINTERS



/* What did I Change
	1 - I defind a pointer in my function where I will put the minimum
	Instade of saying mn I say the value at that mn
	2 - It does not return any thing
*/


/* void findMin(int a[], int sz, int* mn); //Here mn is an address
void findMax(int a[], int sz, int* mx);

int main(void)
{
	int x[5] = { 3, 5, 1, 8, -1 };
	int min;
	int max;

	//It does not return any thing to me!

	//Function Call
	findMin(x, 5,&min); //The address of min
	findMax(x, 5, &max);

	printf("Minimum is %d\n", min);
	printf("Maximun is %d\n", max);

	return (0);
}

void findMin(int a[], int sz, int* mn) //Sending an address
{
	int i;
	*mn = a[0]; //The value of that address is a[0]

	for (i = 1; i < sz; i++)
	{
		if (a[i] < *mn) *mn = a[i];
	}

}
void findMax(int a[], int sz, int* mx) 
{
	int i;
	*mx = a[0];

	for (i = 1; i < sz; i++)
	{
		if (a[i] > *mx) *mx = a[i];
	}

} */


//IN THE SAME LINE

void findStat(int a[], int sz, int* mn, int *mx, double *av); 


int main(void)
{
	int x[5] = { 3, 5, 1, 8, -1 };
	int min, max;
	double ave;
	
	findStat(x, 5, &min, &max, &ave); 

	printf("Minimum is %d\n", min);
	printf("Maximun is %d\n", max);
	printf("Average is %.2f\n", ave);

	return (0);
}

void findStat(int a[], int sz, int* mn, int *mx, double *av) 
{
	int i;
	*mn = a[0]; 
	*mx = a[0];
	int tot = a[0];

	for (i = 1; i < sz; i++)
	{
		if (a[i] < *mn) *mn = a[i];
		if (a[i] > *mx) *mx = a[i];
		tot += a[i];
	}
	*av = 1.0 * tot / sz;
}

