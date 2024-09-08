#include <iostream>

using namespace std;

void texto(int n);

int main()
{
  texto(5);
}

void texto(int n)
{

  if (n == 0)
  {
    return;
  }
  else
{
    cout << "Hola" << endl;
    texto(n - 1);
  }


}
