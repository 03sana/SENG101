/*WEEK 6 STRUCTURES */

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

//
//struct std {
//
//	char fnm[16];
//	char lnm[24];
//	int stdno;
//	double GPA;
//};
//
//int main(void) {
//	struct std s1 = { "John","Smith", 12345, 3.5};

	//printf("%s\n", s1.fnm);
	//printf("%.2f\n", s1.GPA);
	//s1.GPA = 3.1;
	//printf("%.2f\n", s1.GPA);
	//strcpy(s1.fnm, "Johnathan");
	//printf("%s\n", s1.fnm);

	/*printf("enter your first name: ");
	scanf("%s", s1.fnm); 
	printf("%s\n", s1.fnm);
	printf("enter your second name: ");
	scanf("%s", s1.lnm); 
	printf("%s\n", s1.lnm);*/
//
//	return(0);
//}

/********************************************/

//STRUCTURE AND POINTERS 
 
// 
//struct std { //structure members
//	char fnm[16];
//	char lnm[24];
//	int stdno;
//	double GPA;
//};
//int main(void) {
//	struct std s1 = { "John","Smith", 12345,3.5 };
//	struct std* s1p = &s1;
// 
//
// //accsessing the address using the variable of the structure and using pointers
//	printf("%d\n", &s1);
//	printf("%d\n", s1p);//prints same thing
//
//	printf("%d\n", s1.fnm);
//	printf("%d\n", &s1.fnm[0]);
//	printf("%d\n", (*s1p).fnm);
//
//	printf("%d\n", s1.lnm); //adds 16
//	printf("%d\n", &s1.lnm[0]);
//	printf("%d\n", (*s1p).lnm);
//
//
//	printf("%d\n", (*s1p).stdno);
//	printf("%d\n", s1p->stdno);
//	printf("%d\n", &(*s1p).stdno);
//	printf("%d\n", &s1p->stdno);
//
//
//	
//
//	// usingthe  name of the structure and using a pointers to that structure 
//	//how we access individual elements 
//
//
//	printf("%s\n", s1.fnm); //prints first name
//
//	printf("%d\n", s1.stdno); //prints student number
//
//	printf("%s\n", (*s1p).fnm); //prints first name using pointers
//
//	printf("%d\n", (*s1p).stdno);//prints student number using pointers
//
//	printf("%d\n", s1p->fnm); // using arrow pointers
//	printf("%d\n", s1p->stdno);
//
//
//
//
//
//	return(0);
//
//
//}
///*****************************************************************/

//STRUCTURE AND FUNCTIONS 
struct cust {

	char fnm[16];
	char lnm[24];
	int cno;
	double cowe;
	char vip;
};
struct cust fllCust(void);
void  fllCust2(struct cust *c);
void prnCust3(struct cust c);
void prnCust(struct cust c);

int main(void) {

	struct cust c1 , c2,c3;


	//printf("%s\n", c1.fnm);
	//printf("%s\n", c1.lnm);
	//printf("%d\n", c1.cno);
	//printf("%.2f\n", c1.cowe);
	//printf("%c\n", c1.vip);

	//printf("\n");

	c1 = fllCust();
	prnCust(c1);

	fllCust2(&c2); //doest send any thing to me 
	prnCust(c2);

	fllCust3(&c3); //doest send any thing to me 
	prnCust(c3);

	return(0);
}
void prnCust(struct cust c) { //call by value

	printf("%s\n", c.fnm);
	printf("%s\n", c.lnm);
	printf("%d\n", c.cno);
	printf("%.2f\n", c.cowe);
	printf("%c\n", c.vip);
	


}
struct cust fllCust(void) { //call by value


	struct cust c;
	printf("please enter first name: ");
	scanf("%s", c.fnm);
	printf("please enter last name: ");
	scanf("%s", c.lnm);
	printf("please enter customer nb: ");
	scanf("%d", &c.cno);
	printf("please enter money owed: ");
	scanf("%lf", &c.cowe);
	printf("please enter your priority(L/M/H): ");
	scanf(" %c", &c.vip); //we left a space before %c
	c.vip = toupper(c.vip);

	return(c);  

}
void  fllCust2(struct cust* c) { //call by refrence

	printf("please enter first name: ");
	scanf("%s", (*c).fnm); 
	printf("please enter last name: ");
	scanf("%s", (*c).lnm);
	printf("please enter customer nb: ");
	scanf("%d", &(*c).cno);
	printf("please enter money owed: ");
	scanf("%lf", &(*c).cowe);
	printf("please enter your priority: ");
	scanf(" %c", &(*c).vip); //we left a space before %c
	(*c).vip = toupper((*c).vip);

}
void  fllCust3(struct cust* c) { //call by refrence

	printf("please enter first name: ");
	scanf("%s", c->fnm);
	printf("please enter last name: ");
	scanf("%s", c->lnm);
	printf("please enter customer nb: ");
	scanf("%d", &c->cno);
	printf("please enter money owed: ");
	scanf("%lf", &c->cowe);
	printf("please enter your priority: ");
	scanf(" %c", &c->vip); //we left a space before %c
	c->vip = toupper(c->vip);

}
