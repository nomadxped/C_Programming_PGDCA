#include <stdio.h>

//struct Person{
//	char name[100];
//	char mobile[10];
//	int age;
//};
//
//
//int main(){
//	struct Person p = {"Anvaya", "9745696265", 25};
//	
//	printf("Name: %s", p.name);
//	printf("\nMobile: %s", p.mobile);
//	printf("\nAge: %d", p.age);
//	
//}

/*
 * Structure: Structure Array
 */
 
#include <stdio.h>

struct Person
{
	char name[100];
	char mobile[10];
	int age;
};

main()
{
	struct Person p[3];
	int i;
	
	
	for(i=0; i<3; i++)
	{
		printf("Enter Name: ");
		gets(p[i].name);
		printf("Enter Mobile: ");
		gets(p[i].mobile);
		printf("Enter Age: ");
		scanf("%d", &p[i].age);	
	}
	
	
	
	printf("\nDetail: \n");
	for(i=0;i<3;i++)
	{
		printf("\nName: %s", p[i].name);
		printf("\nMobile: %s", p[i].mobile);
		printf("\nAge: %d", p[i].age);
		printf("\n------\n");
	}
	
}

