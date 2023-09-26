#include "main.h"
#include <stdio.h>

/**
 * main - starting point of our project
 * Return: always 0
 */

int main(void)
{
	double num1, num2;
	int choise;

	printf("Simple Calculator\n");
	printf("------------------\n");

	while (1){
		printf("Menu: \n");
		printf("1. Addition\n");
		printf("2. Substraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Modulo\n");
		printf("6. Quit\n");

		printf("Enter your choise: ");
		scanf("%d", &choise);

		if (choise == 6){
			printf("Goodbye!!\n");
			break;
		}

		printf("Enter two numbers: ");
		scanf("%lf %lf", &num1, &num2);

		switch (choise){
			case 1:
				printf("Result:  %.2lf + %.2lf = %.2lf\n", num1, num2, addition(num1 , num2));
				break;
			case 2:
				printf("Result:  %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
				break;
			case 3:
				printf("Result:  %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
				break;
			case 4:
				if (num2 != 0)
					printf("Result:  %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
				else
					printf("Error: division by 0");
				break;
			case 5:
				printf("Result:  %.2lf mod %.2lf = %d\n", num1, num2, (int)num1 % (int)num2);
				break;
			default:
				printf("Invalid operation. Try again!!!");
				break;
		}
	}
	return (0);
}
