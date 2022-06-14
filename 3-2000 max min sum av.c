
/*my project */
//#include<stdio.h>
//
//	int maximum(int x, int y, int z); // prototype
//
//	int minimum(int a, int b, int c); // prototype
//
//	int sum(int x, int y, int z);
//
//	int main(void) { // main body
//
//		int number1;
//		int number2;
//		int number3;
//
//		int numbera;
//		int numberb;
//		int numberc;
//
//		printf("%s", "enter three integers: ");
//		scanf_s("%d%d%d%d%d%d", &number1, &number2, &number3 , &numbera, &numberb, &numberc);
//
//		printf("maximum is %d\n minimum is % d\n", maximum(number1, number2, number3), minimum(numbera, numberb, numberc));
//
//		printf("the sum is %d",sum);
//		
//	}
//	int maximum(int x, int y, int z)
//	{
//		
//
//		int max = x;
//		
//
//		if (y > max) {
//			max = y;
//		}
//		if (z > max) {
//			max = z;
//		}
//
//		
//		
//		return max;
//
//	}
//	int minimum(int a, int b, int c) {
//		int min = a;
//		if (b < min) {
//			min = b;
//		}
//		if (c < min) {
//			min = c;
//		}
//		return min;
//
//	}
//
//	int sum(int x, int y, int z) {
//
//		int sum = 0;
//		int max = x;
//
//		sum += max;
//
//		return(sum);
//	}
//
//

/*sadik project*/
//
//#include<stdio.h>
//int findMin(int a, int b, int c);
//int findMax(int a, int b, int c);
//
//int main(void) {
//
//    int x, y, z;
//    int min, max;
//
//    printf("enetr three integers: ");
//    scanf_s("%d%d%d", &x, &y, &z);
//
//    printf("the mnimum is %d \n", min = findMin(x, y, z));
//    printf("the maximum is %d \n", max = findMax(x, y, z));
//
//    return(0);
//}
//int findMin(int a, int b, int c) {
//
//    int mn;
//    mn = a;
//
//    if (b < mn) mn = b;
//    if (c < mn) mn = c;
//
//    return(mn);
//}
//int findMax(int a, int b, int c) {
//
//    int mx;
//    mx = a;
//
//    if (b > mx) mx = b;
//    if (c > mx) mx = c;
//
//
//
//    return(mx);
//}


#include<stdio.h>

int findMax(int a, int b, int c);
int findMin(int a, int b, int c);
int findSum(int a, int b, int c);
int findAve(int a, int b, int c);

int main(void) {

    int max, min;
    int sum = 0;
    float ave = 0.0;
    int x, y, z;

    printf("enter three integers: \n");
    scanf_s("%d%d%d", &x, &y, &z);

    printf("the maximum is %d\n", max=findMax(x, y, z));
    printf("the minmum is %d\n", min = findMin(x, y, z));
    printf("the sum is %d\n", sum = findSum(x, y, z));
    printf("the average is %.2f\n", ave = findAve(x, y, z));
    return(0);
}
int findMax(int a, int b, int c) {

    int mx = a;
    if (b > mx) mx = b;
    if (c > mx) mx = c;

    return(mx);
}
int findMin(int a, int b, int c) {
    int mn = a;

    if (b < mn) mn = b;
    if (c < mn) mn = c;

    return(mn);
}
int findSum(int a, int b, int c) {
    int sm;
    sm = a + b + c;

    return(sm);
}
int findAve(int a, int b, int c) {
    int av;
    av = (float)(a + b + c) / 3;
    return(av);
}