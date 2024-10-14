//Q10. Write a program that accept basic, HRA, and DA from the user and calculate total salary.

#include <stdio.h>
int main(){
	int basic, HRA, DA, total_salary;
	printf("Enter the Basic Salary : ");
	scanf("%d", &basic);
	printf("Enter the HRA (HOME RENT ALLOWANCE) : ");
	scanf("%d", &HRA);
	printf("Enter the DA (DEARNESS ALLOWANCE) : ");
	scanf("%d", &DA);
	total_salary = basic + HRA + DA;
	printf("\nTotal Salary of the employee is : %d\n", total_salary);
	return 0;
}
