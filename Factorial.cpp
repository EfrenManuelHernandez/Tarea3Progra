#include <iostream>
using namespace std;

int main ()
{
	int num1, fact = 1;

	cout << "Ingresa un numero: ";
	cin >> num1;

	if (num1 == 0)
	{
		num1 = 1;
		cout << num1;
	}
	else
	{
		for (int i = 1; i <= num1; i++)
		{
			fact *= i;
		}
		cout << "El factorial de " << num1 << " es " << fact;


	}
	return 0;
}
