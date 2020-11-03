/* Assignment: 2
Campus: Beer Sheva 
Author: Ayman AbdelRhman, ID: 311549737
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum Nu{ZERO = 0,ONE,TWO,THREE};
#define FIVE 5 
#define TWENTY 20 

int EnterNumber1GreaterThanNumber2(int number2);
void PluseOrMultiplication(char sign, int fromNumber1, int toNumber2);

int main()
{
	int option,number;
	do{
		printf("Please enter your choice :\n 1-for Compute sum\n 2-for Compute factorials\n 3-for Exit\n");
		scanf("%d", &option);
		switch (option)
		{
		case ONE:
			number = EnterNumber1GreaterThanNumber2(TWENTY);
			PluseOrMultiplication('+',ONE,number);break;
		case TWO:
			number = EnterNumber1GreaterThanNumber2(FIVE);
			PluseOrMultiplication('*', ONE, number);break;
		case THREE:  printf("Goodbye!\n");break;
		
		default:  printf("Wrong choice\n");
		}
	
	} while (option != THREE);
}
int EnterNumber1GreaterThanNumber2(int number2)
{
	int number1;
	do{
		printf("Please enter an integer number greater than %d \n",number2);
		scanf("%d", &number1);
	} while (number1 <= number2);
	return number1;
}
void PluseOrMultiplication(char sign, int fromNumber1, int toNumber2)
{
	int i;
	long sum0 = ZERO, sum1 = ONE;

	for (i = fromNumber1; i <= toNumber2; i++)
	{
		switch (sign)
		{
		case '+':sum0 += i;
		case'*':sum1 *= i;
		}
	}
	if (sign == '+')
		printf("%ld\n", sum0);
	else
		printf("%ld\n", sum1);

}