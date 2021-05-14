#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a,b,c;
    cout << "Calculadora De Raices" << endl;
    cout << "ingrese El Valor De a" << endl;
    cin >> a;
    cout << "ingrese El Valor De b" << endl;
    cin >> b;
    cout << "ingrese El Valor De c" << endl;
    cin >> c;
    if ((pow(b,2) - (4*a*c))>= 0)
        {
            cout << "Las Raices Son " << endl;
            cout << "X1 =" << (-b-(sqrt(pow(b,2) - (4*a*c)))) / (2*a) << endl;
            cout << "X2 =" << (-b+(sqrt(pow(b,2) - (4*a*c)))) / (2*a) << endl;
        }
    else
        {
            cout << "La Funcion Cuadratica No Tiene Raices En Los Numeros Reales" << endl;
        }
    return 0;
}
