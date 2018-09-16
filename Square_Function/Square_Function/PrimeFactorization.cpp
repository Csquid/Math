#include "head.h"

class Fractional
{
private:
	int iPrimeNumberTwoN;
	int iPrimeNumberFiveN;
	int iPrimeNumberThreeN;

	int GetPrimeNumberTwoN();
	int GetPrimeNumberFiveN();
	int GetPrimeNumberThreeN();
public:
	void Init();
	void PrimeFactorization(int& iInputData);
	void PrintPrimeFactorization();
};

void Fractional::Init()
{
	iPrimeNumberTwoN = 0;
	iPrimeNumberFiveN = 0;
	iPrimeNumberThreeN = 0;
}

void Fractional::PrimeFactorization(int& iInputData)
{
	if (iInputData == 0)
	{
		std::cout << "Input Data Zero" << std::endl;
	}

	while (iInputData >= 1)
	{
		if ((iInputData % PRIME_NUMBER_TWO) == 0)
		{
			iInputData = iInputData / PRIME_NUMBER_TWO;
			iPrimeNumberTwoN++;
			continue;
		}
		else if ((iInputData % PRIME_NUMBER_THREE) == 0)
		{
			iInputData = iInputData / PRIME_NUMBER_THREE;
			iPrimeNumberThreeN++;
			continue;
		}
		else if ((iInputData % PRIME_NUMBER_FIVE) == 0)
		{
			iInputData = iInputData / PRIME_NUMBER_FIVE;
			iPrimeNumberFiveN;
			continue;
		}
		else
		{
			break;
		}
	}
}

int Fractional::GetPrimeNumberTwoN()
{
	return iPrimeNumberTwoN;
}
int Fractional::GetPrimeNumberFiveN()
{
	return iPrimeNumberFiveN;
}
int Fractional::GetPrimeNumberThreeN()
{
	return iPrimeNumberThreeN;
}

void Fractional::PrintPrimeFactorization()
{
	if (iPrimeNumberTwoN != 0)
	{
		std::cout << "2 to the n " << GetPrimeNumberTwoN() << std::endl;
	}
	if (iPrimeNumberThreeN != 0)
	{
		std::cout << "3 to the n " << GetPrimeNumberThreeN() << std::endl;
	}
	if (iPrimeNumberFiveN != 0)
	{
		std::cout << "5 to the n " << GetPrimeNumberFiveN() << std::endl;
	}
}