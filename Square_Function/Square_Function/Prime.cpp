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

//return 0 != prime data

int Prime::CheckPrime()
{
	int PRIME_ARRAY[] = { 
		PRIME_NUMBER_TWO, 
		PRIME_NUMBER_THREE, 
		PRIME_NUMBER_FIVE, 
		PRIME_NUMBER_SEVEN
	};

	for(int i = 0; i < 4; i++)
	{
		if ((data % PRIME_ARRAY[i]) == 0)
		{
			if (data == PRIME_ARRAY[i])
				return PRIME_ARRAY[i];
			else
				return 0;
		}
	}
	return this->data;
}