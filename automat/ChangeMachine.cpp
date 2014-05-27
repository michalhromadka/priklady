#pragma once

class ChangeMachine
{
private:
	int coins[5];
	int money;

public:

	void pay(int money)
	{
		this->money = money;
	}

	int * returnCoins()
	{
		int coinMap[5] = {20, 10, 5, 2, 1};

		for (int i = 0; i < 5; i++)
		{
			coins[i] = money / coinMap[i];
			money = money % coinMap[i];
		}

		return this->coins;
	}
};

