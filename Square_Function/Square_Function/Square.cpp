#include "head.h"

class Square
{
private:
	int iResult;
	int iSquareN;
	int iSquareData;

	int GetIsquareN();
	int GetResultData();
	int GetIsquareData();
	int SetSquare(int nSquareData, int iSquareN);
public:
	void Init();
	void InsertData();
	void PrintSquareData();
};

void Square::Init()
{
	iResult		= 0;
	iSquareN    = 0;
	iSquareData = 0;
}

void Square::InsertData()
{
	std::cout << "\n\nData: ";
	std::cin >> this->iSquareData;

	if (this->iSquareData == 0)
	{
		std::cout << "\nDon't Square Zero" << std::endl;
	}

	std::cout << "N: ";
	std::cin >> this->iSquareN;

	if (this->iSquareN == 0)
	{
		std::cout << "\nDon't Square N Zero" << std::endl;
	}

	this->iResult = SetSquare(iSquareData, iSquareN);
}

int  Square::GetIsquareN()
{
	return this->iSquareN;
}
int  Square::GetIsquareData()
{
	return this->iSquareData;
}

int Square::GetResultData()
{
	return this->iResult;
}

//by. Mr Guitar
int Square::SetSquare(int nSquareData, int iSquareN)
{
	int result = 1;
	int check  = 0;

	for (int i = 0; i < iSquareN; i++)
	{
		result = result * nSquareData;
	}

	return result;
}

void Square::PrintSquareData()
{
	std::cout << this->GetIsquareData() << " to the n " << this->GetIsquareN() <<
		": " << GetResultData() << std::endl << std::endl;
}
