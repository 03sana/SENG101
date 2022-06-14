/*
*programmer: Sana nassani 
*date: 10-22-2021
* program name: lab assignment 3 
* calculating bmi 
/


*/
#include <stdio.h>
#define BMI 
#include <math.h>
    int main(void) {
    
        double weight, height, bmi;

    printf("Enter the weight in kg: ");   //enter your weight in kg //
    scanf_s("%lf", &weight);

    printf("Enter the height in meter : ");  //enter your height in meters// 
    scanf_s("%lf", &height);
    
    printf(" BMI for a person of: %lf and %lf is %lf \n", weight, height, bmi);

    bmi = (mass / (height * height)); //bmi calculation//

    if (bmi < 18.5) {

        printf("underweight\n");
        
    }
     else if (bmi >= 18.5 && <=22.9) {

        printf("Normal Range\n");
    }

     else if (bmi >=23.0 && <=24.9) {

        printf("Overweight-At Risk\n");
    }
     else if (bmi >= 25.0 && <=29.9) {

    printf("Overweight-Moderately Obese\n");
    }
     else if (bmi >= 25.0 && >= 30.0) {

        printf("Overweight-Severely Obese\n");
    }



  




    return(0);


}