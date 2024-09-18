#include <iostream>

using namespace std;

int sumaValores(int x, int y);
int restaMayor(int x, int y);
float porcentajeMenor(int x, int y);
int mcd(int x, int y);
long long factorial(int x);
long combinatorio(int x, int y);
void cambioNumeros();


int main()
{
  int opcion;
  int x, y;

  cout << "Ingrese dos valores: ";
  cin >> x >> y;

  cout << endl << "Elija 1 opción: " << endl << "1. Mostrar suma de ambos numeros" << endl << "2. Mostrar resta del menor de los numeros al mayor" << endl << "3. Mostrar que porcentaje representa el menor de los numeros sobre el mayor" << endl << "4. Mostrar maximo comun divisor de ambos numeros" << endl << "5. Mostrar el numero combinatorio del mayor de los numeros sobre el menor" << endl << "6. Cambiar los numeros" << endl << endl;

  cin >> opcion;

  switch(opcion)
  {
    case 1:
      
        cout << "La suma de los valores ingresados es: " << sumaValores(x, y) << endl; break;
      
    case 2:
      
        cout << "La resta del menor sobre el mayor es: " << restaMayor(x, y) << endl; break;
      
    case 3:
      
        cout << "El porcentaje que representa el menor sobre el mayor es: "<< porcentajeMenor(x, y) << "%" << endl; break; 
      
    case 4:
      
        cout << "El maximo comun divisor entre los numeros dados es: " << mcd(x, y) << endl; break;
      
    case 5:
      
        cout << "El numero combinatorio del mayor sobre el menor de los numeros dados es: " << combinatorio(x, y) << endl; break;
      
    case 6:
      
        cambioNumeros(); break;
      
  }
}

int sumaValores(int x, int y)
{
  int suma = x + y;
  return suma;
}

int restaMayor(int x, int y)
{
  int resta;

  if (x > y)
  {
    resta = x - y;
  }
  else
{
    resta = y - x;
  }
  return resta;
}

float porcentajeMenor(int x, int y)
{
  int porcentaje;

  if (x > y)
  {
    porcentaje = (y * 100)/x;
  }
  else
{
    porcentaje = (x * 100)/y;
  }

  return porcentaje;
}

int mcd(int x, int y)
{
  int temp;

  while(y != 0)
  {
    temp = y;
    y = x % y;
    x = temp;
  }
  return y;
}

long long factorial(int x)
{
  int fact = 1;

  for (int i = 1; i <= x; i++)
  {
    fact *= i;
  }

  return fact;
}

long combinatorio(int x, int y)
{
  int comb;

  if (x > y)
  {
    comb = factorial(x)/(factorial(y) * factorial(x-y));
  }
  else
  {
    comb = factorial(y)/(factorial(x) * factorial (y-x));
  }
  return comb;
}

void cambioNumeros()
{
  int x, y;
  int opcion;

  cout << "Ingrese 2 numeros nuevos: ";
  cin >> x >> y;

  cout << endl << "Elija 1 opción: " << endl << "1. Mostrar suma de ambos numeros" << endl << "2. Mostrar resta del menor de los numeros al mayor" << endl << "3. Mostrar que porcentaje representa el menor de los numeros sobre el mayor" << endl << "4. Mostrar maximo comun divisor de ambos numeros" << endl << "5. Mostrar el numero combinatorio del mayor de los numeros sobre el menor" << endl << "6. Cambiar los numeros" << endl << endl;

  cin >> opcion;

  switch(opcion)
  {
    case 1:

      cout << "La suma de los valores ingresados es: " << sumaValores(x, y) << endl; break;

    case 2:

      cout << "La resta del menor sobre el mayor es: " << restaMayor(x, y) << endl; break;

    case 3:

      cout << "El porcentaje que representa el menor sobre el mayor es: "<< porcentajeMenor(x, y) << "%" << endl; break; 

    case 4:

      cout << "El maximo comun divisor entre los numeros dados es: " << mcd(x, y) << endl; break;

  }
}
