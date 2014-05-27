#include <stdio.h>
#include "ChangeMachine.cpp"

int main()
{
	ChangeMachine *machine = new ChangeMachine();

	machine->pay(48);

	int *coins = machine->returnCoins();

	printf("Vracene penize: \n");
	printf("20 Kc: %dx\n", coins[0]);
	printf("10 Kc: %dx\n", coins[1]);
	printf("5 Kc: %dx\n", coins[2]);
	printf("2 Kc: %dx\n", coins[3]);
	printf("1 Kc: %dx\n", coins[4]);

	return 0;
}
