/* SANA NASSANI LAB 8*/
#include<stdio.h>

int findMax(int a, int b, int c);
int findMin(int a, int b, int c);
int findSum(int a, int b, int c);
int findAve(int a, int b, int c);
int findPro(int a, int b, int c);
int Menu();
int main(void) {

    while (1) {
        int max, min;
        int sum = 0;
        float ave = 0.0;
        int product;
        int x, y, z,e;
        int selection;
        

        printf("************selection menu************");
        printf("\n1-Maximum\n2-Minimum\n3-Sum\n4-Average\n5-Product");


        printf("\nchoose the operation you want to preform:");
        scanf_s("%d", &selection);

        printf("\nPlease enter three intergers:\n");
        scanf_s("%d%d%d", &x, &y, &z);
       
        int Menu() {
            switch (selection)
            {
            case 1:
                max = findMax(x, y, z);
                printf("maximum is %d\n", max);
                break;
            case 2:
                min = findMin(x, y, z);
                printf("minimum is %d\n", min);
                break;
            case 3:
                sum = findSum(x, y, z);
                printf("the sum is %d\n", sum);
                break;
            case 4:
                ave = findAve(x, y, z);
                printf("the average is %.2f\n", ave);
                break;
            case 5:
                product = findPro(x, y, z);

                printf("the the product is %d\n", product);
                break;
            default:
                break;

            }
        }
    }
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
    int findPro(int a, int b, int c) {
        int pr;

        pr = (a * b * c );

        return(pr);
    }
    return (Menu);

