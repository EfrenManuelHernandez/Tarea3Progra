#include <iostream>
using namespace std;
int main()
{
    double precio=.17, distancia, dias, total;

    cout << "ingresa la distancia a recorrer: ";
    cin >> distancia;

    cout << "ingresa los dias de estancia: ";
    cin >> dias;

    if(distancia>799 && dias > 6)
        {
        total=distancia*precio;
        total-=total*.3;
        cout << "el valor total es: " << total << endl;
        }

    else

        cout << "el valor total es: " << distancia*precio;


    return 0;
}
