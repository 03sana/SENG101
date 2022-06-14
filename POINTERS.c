#include<stdio.h>

int main(void)
{
	//datatype *ptr_name;   //declaration of the pointer;

	int* ptr;
	double* ptr2;

	double a[] = { 1000.0,2000.0,3000.0 };

	ptr = a;  // &a[]

	for (int i = 0; i < 3; i++) {
		printf("value of *ptr: %d\n", *ptr);
		(*ptr++); //(*ptr)++ increments the first value //*ptr++ prints the values
	}





}

#include<stdio.h>
//call by reference
//swap numbers

void swap(int* x, int* y);
int main()
{

	int v1 = 5;
	int v2 = 15;
	printf("vl value before swap : %d\n ", v1);
	printf("v2 value before swap : %d\n ", v2);

	swap(&v1, &v2);

	printf("vl value after swap : %d\n ", v1);
	printf("v2 value after swap : %d\n ", v2);


}


void swap(int* x, int* y) {

	int temp;
	temp = *x; //5 
	*x = *y; //15

	*y = temp; //5

}
