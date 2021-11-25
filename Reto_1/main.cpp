#include <iostream>

using namespace std;

int main()
{

   int r;
   cout << "Ingresa el radio del circulo: ";
   cin >> r;
   float pi = 3.1416;
   float areaDeCirculo = (r * r) * pi;

   cout << "El area del circulo es: " << areaDeCirculo << endl;
   cout << "El area de la esfera es 4 veces mas grande que la de un circulo" << endl;

   float areaDeEsfera = (pi * 4) * (r * r);

   cout << "Por lo tanto el area de la esfera es de: " << areaDeEsfera << endl;

    return 0;
}
