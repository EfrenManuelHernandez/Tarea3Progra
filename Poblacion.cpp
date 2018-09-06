#include <iostream>
using namespace std;

int main ()
{
    int pobA, pobB, cont = 1, IndiceA=0, IndiceB=0;
    cout << "ingrese la el numero de habitantes de A ";
    cin >> pobA;
    cout << "ingrese la el numero de habitantes de B ";
    cin >> pobB;

    cout << endl <<endl;
	cout << "\tAÑO 1" << endl << endl;
	cout << "El numero de habitantes es de: " << endl;
	cout << "PoblacionA" << "=" << pobA <<endl;
	cout << "PoblacionB" << "=" << pobB;


	while(pobA < pobB)
	{
		IndiceA = (pobA * 0.06) + pobA;
		pobA = IndiceA;

		IndiceB = (pobB * 0.03) + pobB;
		pobB = IndiceB;

		cont++;

    cout << endl <<endl;
	cout << "AÑO " << cont << endl << endl;
	cout << "El numero de habitantes es de: " << endl;
	cout << "PoblacionA" << "=" << IndiceA <<endl;
	cout << "PoblacionB" << "=" << IndiceB;
    cout << endl;
	}

	cout << endl;
	cout << " Han tranascurrido " << cont << " AÑOS";

	return 0;
}
