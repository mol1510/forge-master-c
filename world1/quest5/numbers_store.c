#include <stdio.h>
void clear_line(void) {
    int c;

    while ((c = getchar()) != '\n' && c != EOF) {
    }
}
int main(void){

	int numbers[5];
	int count = 0;
	int sum = 0;
	int x = 0;
	do{
		printf("Enter a number (0 to quit): ");
		
		if (scanf("%d", &x) != 1) {
			printf("Invalid input\n");
			clear_line();
			continue;
}
	
		if(x == 0){
			break;
		}

		if (x < 0){
			printf("Negatives are not allowed\n");
		}
		
		else{
			numbers[count] = x;
			sum = sum + x;
			count = count + 1;
		}

	}while (count<5);
	
	 if (count == 0) {
                        printf("No numbers entered\n");
                        return 0;
                }

                int min = numbers[0];
                int max = numbers[0];
		
		for(int y = 1; y < count; y++){
			
			if(min > numbers[y]){
				min = numbers[y];
			}		
			
			if (max < numbers[y]){
				max = numbers[y];
			}
		}
                double avg = (double) sum / count;		
	
	printf("You entered:\n");

	for(int i = 0; i < count; i++){

	printf("%d\n", numbers[i]);

	}

	printf("Total sum = %d\n", sum);
	printf("Max = %d\n", max);
	printf("Min = %d\n", min);
	printf("AVG = %.2f\n", avg);

	return 0;

}
