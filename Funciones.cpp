#include <iostream>
using namespace std;

double factorial(double num);
double potencia(double base, double poten);

int main()
{
    char entrada;
    double rep,x;
    double sum=0;


    do{
        cout << "Menu:  1-COS   2-Logaritmo N  3-SEN  0-Salir \nOpcion: ";
        cin >> entrada;

        switch(entrada)
        {
        case '1':
             cout << "Funcion Coseno " << endl;
            cout << "Ingresa la cantidad de terminos de la serie: ";
            cin >> rep;
            cout << "Ingresa x: ";
            cin >> x;


                for(int i=0;i<rep;i++)
                    if((i%2)==0)
                        sum+=potencia(x,i*2/factorial(i*2));
                else
                        sum+=-(potencia(x,i*2)/factorial(i*2));


            cout << "El resultado es: " << sum << endl;
            break;
        case '2':

            cout << "Funcion Logaritmo N " << endl;
            cout << "Ingresa la cantidad de terminos de la serie: ";
            cin >> rep;
            cout << "Ingresa x: ";
            cin >> x;


                for(int i=1;i<=rep;i++)
                    sum+=(1/i)*potencia(((x-1)/x),i);
                cout << "El resultado es: " << sum << endl;
            break;
        case '3':

                 cout << "Funcion Seno "<< endl;
            cout << "Ingresa la cantidad de terminos de la serie: ";
            cin >> rep;
            cout << "Ingresa x: ";
            cin >> x;

                    for(int i=1;i<=rep;i++)
                        if((i%2)!=0)
                        sum+=potencia(x,i*2-1)/factorial(i*2-1);
                    else
                        sum+=-(potencia(x,i*2-1)/factorial(i*2-1));

            cout << "El resultado es: " << sum << endl;
            break;
        }
    }while(entrada!='0');

    return 0;
}
double factorial(double num)
{

     double fact;
    fact=1;
    for(int i=1; i<=num; i++)
    fact*=i;

    return fact;
}

double potencia(double base, double poten)
{
    double result;
    result=base;
    for(int i=1;i<poten;i++)
        result*=base;


    return result;
}
