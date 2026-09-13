#include<stdio.h>
#include<stdbool.h>
int main(){
	int age=22;
	float height =5.5;
	double marks=45.75;
	char grade='A';
	bool resultpass = true;
	printf("Age = %d, Size = %zu bytes\n", age, sizeof(age));
	printf("height = %d, Size = %zu bytes\n", height, sizeof(height));
	printf("marks= %d, Size = %zu bytes\n", marks, sizeof(marks));
	printf("grade= %d, Size = %zu bytes\n", grade, sizeof(grade));
	printf("resultpass= %d, Size = %zu bytes\n", resultpass, sizeof(resultpass));
	return 0;
}
