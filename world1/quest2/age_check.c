#include <stdio.h>


int main(void){
	int age = 0;
	printf("Enter your age:");
	if(scanf("%d", &age) !=1){
		printf("Invalid input\n");
		return 1;
	}
	if(age < 18){
		printf("Minor\n");
	}
	else{
		printf("Adult\n");
	}
	return 0;
}
