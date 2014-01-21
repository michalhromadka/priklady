#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct Automat {
	virtual int dejPredmet(char * predmet, int penize) = 0;
};


struct Karel  : Automat{

	int dejPredmet(char * predmet, int penize)
	{
		if (strcmp(predmet, "susenka") == 0)
		{
			if (penize >= 10)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}

		else if (strcmp(predmet, "pernicek") == 0)
		{
			if (penize >= 15)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
};


struct Kun : Automat{

	int dejPredmet(char * predmet, int penize)
	{
		if (strcmp(predmet, "susenka") == 0)
		{
			if (penize >= 20)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}

		else if (strcmp(predmet, "pernicek") == 0)
		{
			if (penize >= 25)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
};

int main()
{
	Karel karel;
	Kun kun;

	printf("[KAREL]Mas dostatek penez: %d\n", karel.dejPredmet("susenka", 10));
	printf("[KUN]Mas dostatek penez: %d", kun.dejPredmet("susenka", 10));

	getchar();
	getchar();

	return 0;

}