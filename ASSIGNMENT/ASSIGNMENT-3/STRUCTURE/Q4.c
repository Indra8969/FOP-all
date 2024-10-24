#include <stdio.h>

struct Employee{
	int id;
	float basicS, grossS, hra, da, oa;
	char name[50];
};

void calculate(struct Employee* emp){
	emp->hra = emp->basicS * 20 /100;
	emp->da = emp->basicS * 33 /100;
	emp->oa = emp->basicS * 10 / 100;
	emp->grossS = emp->basicS + emp->hra + emp->da + emp->oa;
}

void printEmp(struct Employee emp){
	printf("\n------------\n");
	printf("id : %d\n", emp.id);
	printf("name : %s\n",emp.name);
	printf("basic salary : %.2f\n", emp.basicS);
	printf("hra : %.2f\n", emp.hra);
	printf("da : %.2f\n", emp.da);
	printf("oa : %.2f\n", emp.oa);
	printf("Gross salary : %.2f\n", emp.grossS);
	printf("------------\n");
}

int main(void){
	struct Employee emps[20];
	int n, i;
	printf("Enter the number of employees : ");
	scanf("%d", &n);
	for(i = 0; i< n; i++){
		printf("\n--Enter the data of the employee %d--\n", i+1);
		printf("Enter the id of the employee %d : ", i + 1);
		scanf(" %d", &emps[i].id);
		printf("Enter the name of the employee %d : ", i + 1);
		fflush(stdin);
		gets(emps[i].name);
		printf("Enter the basic salary of the employee %d : ", i + 1);
		scanf(" %f", &emps[i].basicS);
		printf("-----------\n");
		calculate(&emps[i]);
	}
	for(i = 0; i< n; i++){
		printEmp(emps[i]);
	}
}
