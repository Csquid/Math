#include "head.h"

class Prime
{
private:
	int data;
public:
	void setData(int nData);
	int  CheckPrime();
};

void Prime::setData(int nData)
{
	this->data = nData;
}

int Prime::CheckPrime()
{
	if ((data % PRIME_NUMBER_TWO) == 0)
	{
		if (data == PRIME_NUMBER_TWO)
			return PRIME_NUMBER_TWO;
		else
			return 0;
	}
	else if ((data % PRIME_NUMBER_THREE) == 0)
		return 0;
	else if ((data % PRIME_NUMBER_FIVE) == 0)
		return 0;
	else if ((data % PRIME_NUMBER_FIVE) == 0)
		return 0;
	else
		return this->data;
}