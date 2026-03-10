#include <stdio.h>


int main(void){
	int x = 1;
	int sum = 0;

	do{
		printf("Enter a number (0 to quit): ");
		if(scanf("%d", &x) !=1){ 
			printf("Invalid input\n"); 
			return 1;
		}
		if(x<0){
			printf("Negative input not allowed\n");
		}
		if(x>0){
			printf("You entered: %d\n", x);
			sum = sum +x;
		}
	
	} while (x != 0);
	printf("Total sum: %d\n", sum);
	return 0;
}
