/*
programmer: Sana Nassani
* Date : 10 - 29 - 2021
* Program name : lab homework1
* Question 3
*  /*a program to check whether the entered year is leap year or not */
#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS

int main(void) {

    int year;

    printf("Please enter a year:\n");   //asking the user to enetr a year//
    scanf_s("%d", &year);

    if (year % 400 == 0) {
        printf("%d is a leap year", year);
    }
    else if (year % 100 == 0) {
        printf("%d is not a leap year", year);
    }
    else if (year % 4 == 0) {
        printf("%d is a leap year", year);
    }
    else
        printf("%d is not a leap year", year);





    return(0);
}