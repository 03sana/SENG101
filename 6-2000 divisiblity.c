#include<stdio.h>

int divBy(int num, int div);

int main(void) {

	int num, div, res;

	printf("enter two integers : ");
	scanf_s("%d%d", &num,&div);

	res = divBy(num, div);

if (res == 1) 
	printf("%d is divisible by %d \n", num, div);
else
printf("%d is not divisible by %d \n", num, div);
return(0);
}
int divBy(int num, int div){ 

	int dv;

	if (num % div == 0) dv = 1;

	else dv = 0;
 
return(dv);
}
