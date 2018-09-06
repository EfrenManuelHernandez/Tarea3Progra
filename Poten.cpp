#include <iostream>
using namespace std;

int main()
{
    int base, poten, result;

    cout << "ingresa la base: ";
    cin >> base;

    cout << "Ingresa la potencia: ";
    cin >> poten;
    cout << base << '^' << poten << " = ";

    result=base;
    for(int i=1;i<poten;i++)
        result*=base;
    cout << result;

    return 0;
}
