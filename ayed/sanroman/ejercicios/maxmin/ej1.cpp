#include <iostream>

using namespace std;

int main()
{
  int num, mayor;
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
      if (num > mayor)
      {
        mayor = num;
      }
    }
  }
  cout << "El mayor de los 3 es el número: " << mayor;
}
