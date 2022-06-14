// Lab Assignment
// Programmer : Temaa Al Borom
// Date : 18.2.2022

/* 1 - Write a C program to compare two strings using pointers
*  2 - Write a C program to reverse a string using pointers
*  3 - Write a C program to concatenate two atrings consonant characters using pointers */

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

// PROGRAM 1

/* int compare2string(char* str1, char* str2);

int main()
{
    // Declarations
    char string1[20], string2[20];
    int result;


    printf("Please enter first string> ");
    scanf("%s", string1);
    
    printf("Please enter second string> ");
    scanf("%s", string2);

    result = compare2string(string1, string2);

    if (result == 0)
        printf("1\n"); // That means they are equal
    else
        printf("0\n"); // That means they are not equal
    return (0);
}

int compare2string(char* str1, char* str2)
{
  // Comparing the strings 

    while (*str1 == *str2)
    {
        if (*str1 == '\0' || *str2 == '\0')
            break;

        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2 == '\0')
        return (0);
    else
        return (-1);
} */
 
// PROGRAM 2
//
//int main(void)
//{
//    char string1[20];
//    char string2[20];
//    int i = -1;
//
//    char* ptr1 = string1; //s
//    char* ptr2 = string2;
//
//    printf("Please enter a string> ");
//    scanf("%s", string1);
//
//    while (*ptr1)
//    {
//        ptr1++;
//        i++;
//    }
//
//    while (i >= 0)
//    {
//        ptr1--;
//        *ptr2 = *ptr1;
//        ptr2++;
//        i--;
//    }
//
//    *ptr2 = '\0';
//    ptr2 = string2;
//
//
//    /*while (*ptr2)
//    {
//        *ptr1 = *ptr2;
//        ptr1++;
//        ptr2++;
//    }*/
//
//    printf("After reverse: %s", string2);
//
//    return(0); 
//}

//PROGRAM 3

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define SIZE 20
void consonant(char*);
void concat(char*, char*);
int main()
{
    char string1[SIZE] = "\0", string2[SIZE] = "\0";
    char tar1[SIZE], tar2[SIZE];
    printf("Enter String 1:\n");
    scanf("%s", string1);
    printf("Enter String 2:\n");
    scanf("%s", string2);
    printf("Concatenated String with Consonants\n");
    consonant(string1);
    consonant(string2);
    return 0;
}
void consonant(char* str)
{
    char* target = str;
    int target_index = 0;
    int lenstr = 0;
    while (*target)
    {
        target++;
        lenstr++;
    }
    for (int i = 0; i < lenstr; i++)
    {
        if ((str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' ||

            str[i] == 'i'

            || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u'

            || str[i] == 'U'))

            continue;
        else
        {
            //*target++ = str[i];
            target[target_index] = str[i];
            printf("%c", target[target_index]);
            ++target_index;
        }
    }
}