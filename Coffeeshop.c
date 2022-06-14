#include<stdio.h>
#include<Windows.h>


int main() {
	while (1)
  {

	
	int latte = 19, mocha = 25, amrk = 15, chscake = 35, chssandwich = 20, tea = 5, water = 2, tcofee = 15;
	int total = 0, ch = 0 ;
	double tax, ttlwthtx;
	printf("\t\t\t======================== SM COFEE SHOP =============================\n\n");
	printf("\t\t\t============================*MENU*=================================\n\n");
	printf("1-) Latte Coffee 19TL\t\t2-)Mocha Coffee 25TL\n3-)Americano Coffee 15TL\t4-)CheeseCake 35TL\n5-)Cheese Sandwich 20TL\t\t6-)TEA 5TL\n7-)Water 2TL\t\t\t8-)Turkish Coffee 15TL\n\n");
  
	while (ch != -1)
	{

	
	
		printf("Please Select Items '-1' for Exit selection menu :");
	     scanf_s("%d" , &ch);
	     
			 switch (ch)
			 {
			 case 1:
				 printf("-Latte Coffee 19TL\n");
		 
				 total += latte;
				 break;
			 case 2:
				 printf("-Mocha Coffee 25TL\n");

				 total += mocha;
				 break;
			 case 3:
				 printf("-Americano Coffee 15TL\n");

				 total += amrk;
				 break;
			 case 4:
				 printf("-CheeseCake 35TL\n");

				 total += chscake;
				 break;
			 case 5:
				 printf("-Cheese Sandwich 20TL\n");

				 total += chssandwich;

				 break;
			 

			 case 6:
				 printf("-TEA 5TL\n");

				 total += tea;

				 break;

			 case 7:
				 printf("-Water 2TL\n");

				 total += tea;

				 break;

			 case 8:
				 printf("-Turkish Coffee 15TL\n");

				 total += tea;

				 break;
			 case -1:
				 ch = -1;
				 break;
			 
			   default:
				   printf("invalid Selection\n\n");
				   break;
			 }
	
	 
	
	
	}
	tax = (double)((double)total / 100) * 18;
	ttlwthtx = tax + total;
	printf("\t\t\t==================BILL====================\n\n");
	printf("Total:   %d\n", total);
	printf("18 Tax:%.2f\n", tax);
	printf("+ ----------------\n");
	printf("Total + TAX: %.2f \n\n", ttlwthtx);
	Beep(800, 2000);

  }


}
























