#include <iostream>

using namespace std;

int main()
{
  int caso2 = 0, caso3 = 0, caso4 = 0, caso5 = 0, caso6 = 0, caso7 = 0, caso8 = 0, caso9 = 0, caso10 = 0, caso11 = 0, caso12 = 0;
  int lado1, lado2;

  for (int i = 0; i < 10; i++)
  {
    cout << "Ingrese los dos lados de la tirada de dados: ";
    cin >> lado1 >> lado2;

    if ((lado1 + lado2) == 2)
    {
      caso2++;
    }
    else if ((lado1 + lado2) == 3)
    {
      caso3++;
    }
    else if ((lado1 + lado2) == 4)
    {
      caso4++; 
    }
    else if ((lado1 + lado2) == 5)
    {
      caso5++; 
    }
    else if ((lado1 + lado2) == 6)
    {
      caso6++; 
    }
    else if ((lado1 + lado2) == 7)
    {
      caso7++; 
    }
    else if ((lado1 + lado2) == 8)
    {
      caso8++; 
    }
    else if ((lado1 + lado2) == 9)
    {
      caso9++; 
    }
    else if ((lado1 + lado2) == 10)
    {
      caso10++; 
    }
    else if ((lado1 + lado2) == 11)
    {
      caso11++; 
    }
    else if ((lado1 + lado2) == 12)
    {
      caso12++; 
    }
  }
  cout << "2 salió " << caso2 << " veces" << endl << "3 salió " << caso3 << " veces" << endl << "4 salió " << caso4 << " veces" << endl << "5 salió " << caso5 << " veces" << endl << "6 salió " << caso6 << " veces" << endl << "7 salió " << caso7 << " veces" << endl << "8 salió " << caso8 << " veces" << endl << "9 salió " << caso9 << " veces" << endl << "10 salió " << caso10 << " veces" << endl << "11 salió " << caso11 << " veces" << endl << "12 salió " << caso12 << " veces" << endl;
}
