#include <stdio.h> 
struct Result{
    float outof;
    float math; 
    float english; 
    float science;
    float percentage; 
    char grade;
};
struct Student{
    char name[50];
    int rollnumber;
    struct Result result;
};
char grade(struct Result result){
      if (result.percentage >= 90) {
        return 'A';
    } else if (result.percentage >= 80) {
        return 'B';
    } else if (result.percentage >= 70) {
        return 'C';
    } else if (result.percentage >= 60) {
        return 'D';
    } else if (result.percentage >= 50) {
        return 'E';
    } else {
        return 'F';
    }
}
int countper(struct Result obj){
    float sum, per;
    sum = obj.math + obj.english + obj.science;
    per = (sum / (obj.outof * 3))*100;
    return per;
}

void sort(struct Student *stu, int len){
	int i,j;
    struct Student temp;
    for(i = 0; i < len - 1; i++) {  // Correct loop bounds
        for(j = 0; j < len - 1 - i; j++) {
            if(stu[j].result.percentage > stu[j + 1].result.percentage) {
                temp = stu[j];
                stu[j] = stu[j + 1]; 
                stu[j + 1] = temp;
            }
        }
    }
}

void printStud(struct Student stu){
	  printf("\nName : %s Roll Number : %d\n Percentage : %2f\n", stu.name, stu.rollnumber, stu.result.percentage);
}

int main(){
    struct Student stu[20];
    int n,i;
    printf("Enter the number of student : ");
    scanf("%d", &n);
    for(i = 0; i< n; i++){
    	printf("\nEnter the data of the student %d", i+1);
    	printf("\nEnter the name of the student : ");
    	fflush(stdin);
    	fgets(stu[i].name, sizeof(stu[i].name), stdin);
    	printf("Enter the roll number of the student : ");
    	scanf(" %d", &stu[i].rollnumber);
    	printf("Enter the marks of maths : ");
    	scanf(" %f", &stu[i].result.math);
    	printf("Enter the marks of english : ");
    	scanf(" %f", &stu[i].result.english);
    	printf("Enter the marks of science : ");
    	scanf(" %f", &stu[i].result.science);
    	printf("Enter outof marks : ");
    	scanf(" %f", &stu[i].result.outof);
    	stu[i].result.percentage = countper(stu[i].result);
    	stu[i].result.grade = grade(stu[i].result);
	}
  	sort(&stu[0], n);
  	for(i = 0; i<n; i++){
  		printStud(stu[i]);	
	}
  	
}
