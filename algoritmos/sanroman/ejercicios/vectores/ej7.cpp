#include <iostream>

using namespace std;

void ingresoValores(int vec[], int n);
void mostrarValores(int vec[], int n);
void ValoresAB(int A[], int B[], int n);
int vectorToNum(int vec[], int n);
void numToVector(int x[], int n, int sumaAB);

int main()
{
  int n, A[n], B[n], suma[n+1], resta[n];
  int sumaA, sumaB;

  cout << "Ingrese el rango (rango < 20) de los vectores A y B: ";
  cin >> n;

  cout << "Ingrese los valores del vector A: ";
  ingresoValores(A, n);

  cout << "Ingrese los valores del vector B: ";
  ingresoValores(B, n);

  cout << "El numero entero de A, es: " <<  vectorToNum(A, n) << endl;
  cout << "El numero entero de B, es: " <<  vectorToNum(B, n) << endl;

  sumaA = vectorToNum(A, n);
  sumaB = vectorToNum(B, n);

  cout << "La suma de los vectores da un resultado de: " << sumaA+sumaB << endl;

  numToVector(suma, n+1, (sumaA + sumaB));

  cout << "El vector suma es: ";
  mostrarValores(suma, n+1);

  cout << endl;
}

// Transformo numero entero a vector
void numToVector(int x[], int n, int sumaAB)
{
  bool flag = true;
  int pasada;
  if(flag)
  {
    pasada = 1;
    flag = false;
  }
  for (int p = n-1; p >= 0; p--)
  {
    x[p] = sumaAB / pasada % 10; 
    pasada *= 10;
  }
}

// Lleno vector
void ingresoValores(int vec[], int n)
{
  int num;

  for (int i = 0; i < n; i++)
  {
    cin >> num;
    vec[i] = num;
  }
}

// Muestro vector
void mostrarValores(int vec[], int n)
{
  for (int j = 0; j < n; j++)
  {
    cout << vec[j];
  }
}

// Muestro valores A y B
void ValoresAB(int x[], int y[], int n)
{
  cout << "Array de A: ";
  mostrarValores(x, n);
  cout << endl << "Array de B: ";
  mostrarValores(y, n);
}

// Transformo vector a numero entero
int vectorToNum(int vec[], int n)
{
  bool flag = true;
  int pasada, num = 0;

   for (int k = n-1; k >= 0; k--)
  {
    if (flag)
    {
      pasada = 1;
      flag = false;
    }
    num += (vec[k] * pasada);
    pasada *= 10;
  }
  return num;
}
