#include <iostream>

using namespace std;

void bubbleSort(int vec[]);
void coutArray(int vec[]);
void fueraRango(int vec[]);
void enRango(int vec[]);

int lista[] = {9, 12, 7, -2, 5, 6, -3, 4, 1, 2};
int noRango[10] = {0};
int rango[10] = {0};

int main()
{
  fueraRango(lista);
  enRango(lista);

  bubbleSort(rango);
  bubbleSort(noRango);

  cout << "Array en rango sorteado: ";

  coutArray(rango);

  cout << endl << "Array fuera de rango sorteado: ";

  coutArray(noRango);

  cout << endl;
}

void fueraRango(int vec[])
{
  for (int k = 0; k < 10; k++)
  {
    if (vec[k] < 0 || vec[k] > 10)
    {
      noRango[k] = vec[k];
    }
  }
}

void enRango(int vec[])
{
  for (int p = 0; p < 10; p++)
  {
    if (vec[p] > 0 && vec[p] < 10)
    {
      rango[p] = vec[p];
    }
  }

}

void bubbleSort(int vec[])
{
  for (int i = 0; i < 10 - 1; i++)
  {
    for (int j = 0; j < 10 - 1 - i; j++)
    {
      if (vec[j] > vec[j+1])
      {
        int temp = vec[j];
        vec[j] = vec[j+1];
        vec[j+1] = temp;
      }
    }
  }
}

void coutArray(int vec[])
{
  for (int n = 0; n < 10; n++)
  {
    if (vec[n] != 0)
    {
      cout << vec[n];
      if (n != 9)
      {
        cout << ", ";
      }
    }
  }
}
