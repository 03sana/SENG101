/* 
programmer: Sana Nassani
* Date : 10 - 29 - 2021
* Program name : lab homework1
* Question 1*/

 /* a program to take input of rollno and marks by 5 subjects of 100 
 and calculating the percentage 
 */
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

    /* define variables*/

    int rollno, Math, Physics, PhysicsLab, SENG101, SENG123;

    /* Input roll no from user */
    printf(" PLEASE Enter your roll no: ");
    scanf_s("%d", &rollno);

    /* Input marks of five subjects from user */
    printf("Enter your Math mark: ");
    scanf_s("%d", &Math);
    printf("Enter your physics mark: ");
    scanf_s("%d", &Physics);
    printf("Enter your PhysicsLab mark: ");
    scanf_s("%d", &PhysicsLab);
    printf("Enter your SENG101 mark: ");
    scanf_s("%d", &SENG101);
    printf("Enter your SENG123 mark: ");
    scanf_s("%d", &SENG123);


    /* Calculate percentage */

    float total, average, percentage;
    total = Math + Physics + PhysicsLab + SENG101 + SENG123;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;
    printf("your Percentage is = %.2f\n", percentage);
    printf("rollno : %d\n", rollno);

    return(0);



}