#include "head.h"
#include "Prime.cpp"

int main()
{
	int nData = 0;
	int result = 0;

	Prime pr;

	std::cout << "Input Data: ";
	std::cin >> nData;
	
	pr.setData(nData);
	result = pr.CheckPrime();

	if(result == 0)
	{
		
	}	
	else
	{
		std::cout << "This Number is Prime [ " << result << " ]" << std::endl;
	}
	return 0;
}