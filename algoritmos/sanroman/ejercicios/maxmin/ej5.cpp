#include <iostream>

using namespace std;

int main()
{
  int num, max, min, suma = 0, promedio, cantidad = 0;
  bool flag = true;


  do
  {
    if (flag)
    {
      cout << "Ingrese un número: ";
      cin >> num;

      max = num;
      min = num;

      suma += num;
      cantidad ++;

      flag = false;
    }
    else
  {
      cout << "Ingrese otro número: ";
      cin >> num;

      if (num != 0 && num > max)
      {
        max = num;

        suma += num;
        cantidad ++;

      }
      else if (num != 0 && num < min)
      {
        min = num;

        suma += num;
        cantidad ++;
      }
      else if (num != 0 && num == max || num == min)
      {
        suma += num;
        cantidad ++;
      }
    }
  }
  while (num != 0);

  promedio = suma / cantidad;

  cout << "La suma de los numeros es de: " << suma << endl;
  cout << "La cantidad de numeros ingresados es de: " << cantidad << endl;
  cout << "El promedio de los numeros ingresados es de: " << promedio << endl;
  cout << "El menor de los numeros es: " << max << endl;
  cout << "El mayor de los numeros es: " << min << endl;
}
