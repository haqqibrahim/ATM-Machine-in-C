// HEADER FILE
#include <stdio.h>
#include <stdlib.h>

int fastCash(int amount)
{
	int choice;
	printf("1. $20.00\n2. 40.00\n3. 80.00\n4. 100.00\n5. Exit");
	scanf("%d", &choice);

	switch (choice)
	{
	case 1:
		amount = 20;

	case 2:
		amount = 40;

	case 3:
		amount = 80;

	case 4:
		amount = 100;

	case 5:
		break;
	}

	return amount;
}

int withdraw(int balence)
{
	int withdrawAmount;
	printf("Enter the amount you would like to withdraw: ");
	scanf("%d", &withdrawAmount);
	balence = -withdrawAmount;
	return balence;
}

int deposit(int balence)
{
	int depositAmount;
	printf("Enter an amount you would like to deposit: ");
	scanf("%d", &depositAmount);
	balence += depositAmount;
	return balence;
}

void checkBalence(int balence)
{
	printf("Your current balence is: %d\n", balence);
	return;
}