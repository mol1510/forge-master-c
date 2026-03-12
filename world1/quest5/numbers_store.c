#include <stdio.h>


void clear_line(void);
void print_numbers(int numbers[], int count);
int compute_min(int numbers[], int count);
int compute_max(int numbers[], int count);

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

	int min = compute_min(numbers, count);
	int max = compute_max(numbers, count);
	double avg = (double)sum / count;

	print_numbers(numbers, count);
	printf("Total sum: %d\n", sum);
	printf("Min: %d\n", min);
	printf("Max: %d\n", max);
	printf("Average: %.2f\n", avg);

	return 0;

}

void clear_line(void){
	int c;

	while ((c = getchar()) != '\n' && c != EOF){
	}
}

void print_numbers(int numbers[], int count){
	printf("You entered:\n");
	for (int i = 0; i < count; i++){
		printf("%d\n", numbers[i]);
	}
}

int compute_min(int numbers[], int count){
	int min = numbers[0];

	for (int i = 1; i < count; i++)
	{
		if (numbers[i] < min)
		{
			min = numbers[i];
		}
	}

	return min;
}

int compute_max(int numbers[], int count){
	int max = numbers[0];

	for (int i = 1; i < count; i++)
	{
		if (numbers[i] > max)
		{
			max = numbers[i];
		}
	}

	return max;
}