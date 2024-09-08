#include <iostream>

using namespace std;

int main()
{ 
  int lado1, lado2, lado3, eq=0, is=0, es=0;
  do
  {
    cout << "Ingrese los 3 lados de un triangulo: " << endl;
    cin >> lado1 >> lado2 >> lado3;
    if (lado1 != 0 && lado2 != 0 && lado3 != 0)
    {
      if (lado1 == lado2 == lado3)
      {
        eq++;
        cout << "El triangulo dado es equilatero" << endl;
      }
      else if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3)
      {
        es++;
        cout << "El triangulo dado es escaleno" << endl;
      }
      else if (lado1 == lado2 && lado1 != lado3 || lado1 == lado3 && lado1 != lado2 || lado2 == lado3 && lado2 != lado1)
      {
        is++;
        cout << "El triangulo dado es isosceles" << endl;
      }
    }
  }while(lado1 != 0 && lado2 != 0 && lado3 != 0);

  cout << "Triangulos equilateros: " << eq << endl << "Triangulos isosceles: " << is << endl << "Triangulos escalenos: " << es << endl;

  return 0;
}

