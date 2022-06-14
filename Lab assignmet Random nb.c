#include<stdio.h>


int main() {
   
    
   
    
    srand(time(0));
    int mynum = rand() % 100 + 1; 
    int counter = 0;
    int guess = 0;

    


    while (mynum != guess) {
        printf("i have a random number guess it: ");
        scanf_s("%d", &guess);

        if (guess > mynum)
        {
            printf("too high\n");
        }

        else if (mynum > guess)
        {
            printf("too low\n");
        }

        else
        {
            printf("correct");
        }


        
    }
    return(0);
}
