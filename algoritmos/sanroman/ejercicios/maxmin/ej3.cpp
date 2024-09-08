#include <iostream>

using namespace std;

int main()
{
  int num, mayor, veces=1;
  bool num1 = true;

  for (int i = 0; i < 3; i++)
  {
    if (num1)
    {
      cout << "Ingrese un número: ";
      cin >> mayor;
      num1 = false;
    }
    else
   {
      cout << "Ingrese otro número: ";
      cin >> num;
      if (num == mayor)
      {
        veces++;
      }
      else if (num > mayor)
      {
        mayor = num;
        veces = 1;
      }
    }
  }
  cout << "El mayor de los 3 es el número: " << mayor << endl;
  cout << "Fue ingresado: " << veces << " veces" << endl;
}
