#include <iostream>

using namespace std;

int main()
{
	int max = 0;
	cin >> max;

	for (int i = 0; i < max; i++)
	{

		for (int j = max; j > i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}

		cout << endl;


	}
	return 0;
}