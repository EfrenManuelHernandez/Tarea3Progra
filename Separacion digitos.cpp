#include <iostream>

using namespace std;

int main()
{
	int numero;

	cout << "Digite un numero de 5 digitos: ";
	cin >> numero;

	cout << "\n" << numero / 10000 << "   " << numero % 10000 / 1000 << "   "
	     << numero % 1000 / 100 << "   " << numero % 100 / 10 << "   "
		 << numero % 10 << endl;

	return 0;

}
