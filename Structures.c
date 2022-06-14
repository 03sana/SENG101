#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//
//struct dt {
//
//	int mo;
//	int dy;
//	int yr;
//
//};
//
//int main() {
//
//	struct dt bday;
//	char d[4];
//
//	printf("please enter your birth date (mm//dd/yyyy)");
//	scanf_s("%d%d%d", &bday.mo, &bday.dy, &bday.yr);
//
//
//	switch (bday.mo) {
//	case1: strcpy(d, "Jan"); break;
//	case2: strcpy(d, "Feb"); break;
//	case3: strcpy(d, "Mar"); break;
//	case4: strcpy(d, "Apr"); break;
//	case5: strcpy(d, "May"); break;
//	case6: strcpy(d, "Jun"); break;
//	case7: strcpy(d, "Jul"); break;
//	case8: strcpy(d, "Aug"); break;
//	case9: strcpy(d, "Sep"); break;
//	case10: strcpy(d, "Oct"); break;
//	case11: strcpy(d, "Nov"); break;
//	case12: strcpy(d, "Dec"); /*break;*/
//
//	}
//	printf("your bday is : %s. %d. %d\n",  d, bday.dy , bday.yr);
//
//
//	return(0);
//
//}
///* 
	/*struct dt {

		int mo;
		int dy;
		int yr;

	};
	struct pers {

		char fnm[16];
		char lnm[24];
		struct dt bd;


	};

	int main() {

		struct pers p1,p2;

		printf("please enter first name:");
		scanf("%s", p1.fnm);
		printf("please enter last name:");
		scanf("%s", p1.lnm);
		printf("please enter your birth date (mm/dd/yyyy)");
		scanf("%d/%d/%d", &p1.bd.mo, &p1.bd.dy, &p1.bd.yr);

		while (p1.bd.mo < 1 || p1.bd.mo > 12) {
			
			printf("please check month");
			scanf("%d/%d/%d", &p1.bd.mo, &p1.bd.dy, &p1.bd.yr);

			return(1);
		}
		printf("welcome to %s %s \n ", p1.fnm, p1.lnm);
		printf("your birthday is %d-%d-%d\n", p1.bd.mo, p1.bd.dy, p1.bd.yr);


		printf("please enter first name:");
		scanf("%s", p2.fnm);
		printf("please enter last name:");
		scanf("%s", p2.lnm);
		printf("please enter your birth date (mm/dd/yyyy)");
		scanf("%d/%d/%d", &p2.bd.mo, &p2.bd.dy, &p2.bd.yr);

		while (p2.bd.mo < 1 || p2.bd.mo > 12) {

			printf("please check month");
			scanf("%d/%d/%d", &p2.bd.mo, &p2.bd.dy, &p2.bd.yr);

			return(1);
		}
		printf("welcome to %s %s \n ", p2.fnm, p2.lnm);
		printf("your birthday is %d-%d-%d\n", p2.bd.mo, p2.bd.dy, p2.bd.yr);


		return(0);
	}

	*/

	/*array of structures */
#define NMLEN 24
#define MAXCUST 100
struct dt {
	
	int dy;
	int mo;
	int yr;
};
struct ph {

	int ac;
	int xc;
	int sn;
};
struct cust {

	char fnm[NMLEN];
	char lnm[NMLEN];
	struct dt bd;
	struct ph pn;
	char vip;

};
int main() {

	struct cust c[MAXCUST];
	int i=0, ActCustNo;
	FILE* fptr;


	fptr = fopen("CustDB.txt", "r");

	fscanf(fptr, "%s %s %d/%d/%d %d-%d-%d %c", 
		c[i].fnm, c[i].lnm,
		&c[i].bd.dy, &c[i].bd.mo, &c[i].bd.yr,
		&c[i].pn.ac, &c[i].pn.xc, &c[i].pn.sn, 
		&c[i].vip);

	while (!feof(fptr)) {
		i++;
		fscanf(fptr, "%s %s %d/%d/%d %d-%d-%d %c",
			c[i].fnm, c[i].lnm,
			&c[i].bd.dy, &c[i].bd.mo, &c[i].bd.yr,
			&c[i].pn.ac, &c[i].pn.xc, &c[i].pn.sn,
			&c[i].vip);

	}

	ActCustNo = i;
	for (i = 0 ; i < ActCustNo; i++)
	{
		printf("%s %s %d/%d/%d %d-%d-%d %c\n", c[i].fnm, c[i].lnm,
			c[i].bd.dy, c[i].bd.mo, c[i].bd.yr,
			c[i].pn.ac, c[i].pn.xc, c[i].pn.sn,
			c[i].vip);

	}

	fclose(fptr);

	return(0);
}