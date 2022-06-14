//
//struct person {
//
//	int age;
//	float weight;
//
//};
//
//int main() {
//
//	struct person person1, * personptr;
//
//	personptr = &person1;
//
//	printf("enter age: ");
//	scanf_s("%d", &personptr->age);
//
//	printf("enter weight: ");
//	scanf_s("%f", &personptr->weight);
//
//	printf("Displaying::>>>>>>\n");
//	printf("Age: %d\n", personptr->age); //(*personptr).age
//	printf("weight: %5.2f\n", personptr->weight);//(*personptr).weight
//
//
//	return(0);
//	
//	
//
//}

/*****************************************/


struct dog {

	char name[10];
	char breed[10];
	int age;
	char color[10];
};
void func1(struct dog* ptr_d);
void func2(struct dog* ptr_dog);
int main() {

	struct dog my_dog = {"leo","pug",5,"black"};
	struct dog* ptr_dog;

	ptr_dog = &my_dog;
	
	
	func1(ptr_dog);
	func2(ptr_dog);
	
	return(0);

}
void func1(struct dog* ptr_dog) {

	strcpy(ptr_dog->name, "liam");
	strcpy(ptr_dog->breed, "pug");
	ptr_dog->age = 10;

}
void func2(struct dog* ptr_dog) {

	printf("new name: %s\n", ptr_dog->name);
	printf("new name: %s\n", ptr_dog->breed);
	printf("new name: %d\n", ptr_dog->age);

}