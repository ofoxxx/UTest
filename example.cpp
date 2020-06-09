#include <iostream>
#include "UTestCase.h"

using namespace std;

int main()
{
	const float z = 0.F;
	UTestCase cases[] = {
		{ "Devide by zero is inf", [z] { return isinf(1.F / z); } },
		{ "Zero by zero is nan", [z] { return isnan(0.F / z); } } };
	
	for (auto c : cases)
	{
		c();
		cout << c;
	}

	return 0;
}
