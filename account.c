#include <stdio.h>

int main(void)
{
	int user_account;
	int user_pin;
	int account = 500706;
	int pin = 6436;
	int balance = 300;

	printf("Hello and welcome to Huduma services\n");
	printf("Please enter your account number below\n");
	printf("Account number:  ");
	scanf("%d", &user_account);

	while(user_account != account){
		printf("\nError, unknown account number!\n\
Try again\n\
Account number: ");
		scanf("%d", &user_account);
	}

	printf("\nEnter pin: ");
	scanf("%d", &user_pin);
	while(user_pin != pin){
		printf("\nError, wrong pin!\n\
Try again\n\
Enter pin: ");
		scanf("%d", &user_pin);
	}
	if(user_pin = pin){
		printf("\nYour account balance: %d\n", balance);
	}
}

