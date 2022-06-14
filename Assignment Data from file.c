#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define S  15
#define N  15


int main(void)
{
	char stdnms[S][N];
	char temp[N];



	int i = 0, k=0;
	int last=i-1;

	FILE* myfilep;
	FILE* myfilep2;

	myfilep = fopen("Source.txt", "r");

	for ( i = 0; i < S; i++)
	{
		fputs(stdnms[i], myfilep);
	}
	fclose(myfilep);
	myfilep2 = fopen("Dest.txt", "w");

		for (i = last; i > 0; i--) 
			for (k = 1; k <= i; k++) 
				if (strcmp(stdnms[k], stdnms[k - 1]) < 0) {
					strcpy(temp, stdnms[k]);
					strcpy(stdnms[k], stdnms[k - 1]);
					strcpy(stdnms[k - 1], temp);

					fgets(stdnms, 15, myfilep2);
				}

		for (i = 0; i <= last; i++)
			
			printf("%s\n", stdnms[i]);

		return(0);


		
		fclose(myfilep2);

		return (0);
	}



	