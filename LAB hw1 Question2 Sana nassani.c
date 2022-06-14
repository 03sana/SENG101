/* programmer: Sana Nassani
* Date : 10 - 29 - 2021
* Program name : lab homework1
* Question 2 * 
//A Program to compute grade of students//
*/
#include<stdio.h>
#define CRT_SECURE_NO_WARINIGS
int main(void){




int marks;
printf("Enter your mark\n ");
scanf_s("%d", &marks);

{
    if (marks < 50)
    {
        printf("Grade F");
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("Grade C");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("Grade B");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("Grade B+");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("Grade A");
    }
    else if (marks >= 90 && marks <= 100)
    {
        printf("Grade A+");
    }
}

return 0;



}