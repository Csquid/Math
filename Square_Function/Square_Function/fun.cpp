#include "head.h"

class Fractional
{
private:
	int iResult;
	int iSquareN;
	int iSquareData;
	int iPrimeNumber[3] = { 2, 3, 5 };

	int GetIsquareN();
	int GetResultData();
	int GetIsquareData();
	int Square(int nSquareData, int iSquareN);
public:
	void PrintData();
	void InsertData();
	void PrimeFactorization();
};

void Fractional::PrintData()
{
	std::cout << this->GetIsquareData() << " to the n " << this->GetIsquareN() <<
		": " << GetResultData() << std::endl << std::endl;
}

void Fractional::InsertData()
{
	std::cout << "\n\nData: ";
	std::cin >> this->iSquareData;

	if (this->iSquareData == 0)
	{
		std::cout << "\nDon't Square Zero" << std::endl;
		exit(1);
	}

	std::cout << "N: ";
	std::cin >> this->iSquareN;

	if (this->iSquareN == 0)
	{
		std::cout << "\nDon't Square N Zero" << std::endl;
		exit(1);
	}

	this->iResult = Square(iSquareData, iSquareN);
}

int  Fractional::GetIsquareN()
{
	return this->iSquareN;
}
int  Fractional::GetIsquareData()
{
	return this->iSquareData;
}

int Fractional::GetResultData()
{
	return this->iResult;
}

//by. Mr Guitar
int Fractional::Square(int nSquareData, int iSquareN)
{
	int result = 1;
	int check  = 0;

	for (int i = 0; i < iSquareN; i++)
	{
		result = result * nSquareData;
	}

	return result;
}

void Fractional::PrimeFactorization()
{

}