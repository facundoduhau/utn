#include <iostream>

using namespace std;

int main() 
{
  int vec[10], min, max, valor, minpos, maxpos;
  bool flag = true;

  for (int i = 0; i < 10; i++) 
  {
    cout << "Ingrese un valor: ";
    cin >> valor;

    if (flag) 
    {
      min = max = valor;
      minpos = maxpos = i;
      flag = false;
    }

    else if (!flag)
    {
      if (valor < min)
      {
        min = valor;
        minpos = i;
      }
      else if (valor > max)
      {
        max = valor;
        maxpos = i;
      }
    }
  }

  cout << "El valor menor del array es: " << min << " con posición: " << minpos << endl << "El mayor valor del array es: " << max << " y su posición es: " << maxpos;
  cout << endl;
}
