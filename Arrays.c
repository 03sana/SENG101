
#include<stdio.h>
//finding minmum from array// 
void findStat(int a[], int sz, int *mn, int *mx, double *av); /*prototype*//*plus pointer */
int main(void) {
	int x[5] = { 3,5,1,8,-1 };
	int min;
	int max;
	double ave; 
	findStat(x, 5, &min, &max, &ave); /*adress of calling function*/
	printf("minimum is %d\n", min);
	printf("maximum is %d\n", max);
	printf("average is %.2f\n", ave);
	return(0);
}
void findStat(int a[], int sz, int *mn, int *mx, double *av) {
	int i;
	*mn = a[0]; 
	*mx = a[0];
	int tot = a[0];
	for (i = 1; i < sz; i++) {
		if (a[i] < *mn) *mn = a[i];
		if (a[i] > *mx) *mx = a[i];
		tot += a[i];
	}
	*av = 1.1 * tot / sz;
}
