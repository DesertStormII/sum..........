#include <iostream>

using namespace std;

int main()
{
	int sum=0;
	cout << "sum like this                        ";
	for (int m = 0; m <= 250; m = m + 2)
	{
		cout << " + " << m;
		sum = sum + m;
	}
	cout << " = " << sum;


	return 0;
}